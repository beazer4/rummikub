//
// Created by Brendan Ehle on 2/10/21.
//

#include "hand.h"


hand::hand(std::string player1) {
    numTiles = 0;
    player = std::move(player1);
}
void hand::add(tile t) {
    curHand.push_back(t);
    numTiles += 1;
}
void hand::openHand(deck& d) {
    for (int i=0; i < 13; i++) {
        add(d.randomDraw());
    }
}
void hand::printHand() {
    for (int i = 0; i < curHand.size(); i++) {
        curHand[i].printTile();
    }
}
tile hand::getTile(int i) {
    return curHand[i];
}
std::vector<tile> hand::h2v() {
    return curHand;
}
bool hand::isStraight(std::vector<tile> set) {
    sort(set.begin(), set.end());
    int testRank = set[0].getNum();
    for (int i = 0;i < set.size();i++)
    {
        if (set[i].getNum() != testRank )
            return false;
        testRank++;
    }
    return(true);
}
bool hand::isFlush(std::vector<tile> set) {
    std::string color = set[0].getColor();
    for (int i = 0;i < set.size();i++) {
        if (set[i].getColor() != color) {
            return false;
        }
    }
    return true;
}
bool hand::isSameNum(std::vector<tile> set) {
    int num = set[0].getNum();
    for (int i = 0;i < set.size();i++) {
        if (set[i].getNum() != num) {
            return false;
        }
    }
    return true;
}
bool hand::difColor(std::vector<tile> set) {
    if (set.size() > 4){
        return false;
    }
    std::string color = set[0].getColor();
    for (int i = 1;i < set.size();i++) {
        if (set[i].getColor() == color) {
            return false;
        }
    }
    return true;
}
bool hand::SF(const std::vector<tile>& set) {
    return (isFlush(set) && isStraight(set));
}
bool hand::SnDc(const std::vector<tile>& set) {
    return (isSameNum(set) && difColor(set));
}
std::vector<std::vector<tile>> hand::perm(hand& h, int num) {
    std::vector<std::vector<tile>> perm;
    sort(h.curHand.begin(), h.curHand.end());
    do {
        std::vector<tile> tiles;
        for (int j=0; j < num; j++) {
            tiles.push_back(curHand[j]);
        }
        if (!std::count(perm.begin(), perm.end(), tiles)) {
            perm.push_back(tiles);
        }
    } while (std::next_permutation(h.curHand.begin(), h.curHand.end()));
    return perm;
}
void hand::printVec(std::vector<tile> perm) {
    for (int i=0; i < perm.size(); i++){
        std::cout << perm[i].getNum() << " " << perm[i].getColor() << "     ";
    }
}
void hand::printSets(std::vector<std::vector<tile>> sets) {
    for (int i=0; i < sets.size(); i++){
        printVec(sets[i]);
        std::cout << std::endl;
    }
}
std::string hand::getPlayer() {
    return player;
}
std::vector<std::vector<tile>> hand::validMoves(std::vector<std::vector<tile>> perms) {
    std::vector<std::vector<tile>> val;
    for (int i=0; i < perms.size(); i++) {
        if (SF(perms[i]) or SnDc(perms[i])) {
            sort(perms[i].begin(), perms[i].end());
            if (!std::count(val.begin(), val.end(), perms[i])) {
                val.push_back(perms[i]);
            }
        }
    }
    return val;
}
tile hand::check5(hand &h, std::vector<tile>) {
    
}
int hand::runScore(std::vector<tile> run) {
    int val = 0;
    for (int i=0; i < run.size(); i++) {
        val += run[i].getNum();
        if (run[i].getNum() == 0) {
            val -= 8;
        }
    }
    if (SF(run)) {
        val += 10;
    }
    if (SnDc(run)) {
        val += 18;
    }
    val += run.size()*2;
    return val;
}
std::vector<tile> hand::bestMove(std::vector<std::vector<tile>> all) {
    std::vector<tile> best;
    for (int i=0; i<all.size(); i++) {
        if (best.size() == 0) {
            for (int j=0; j<all[i].size(); j++) {
                best.push_back(all[i][j]);
            }
        }
        else {
            if (runScore(best) < runScore(all[i])) {
                best.clear();
                for (int j=0; j<all[i].size(); j++) {
                    best.push_back(all[i][j]);
                }
            }
        }
    }
    return best;
}
std::vector<tile> hand::move(hand& h) {
    std::vector<std::vector<tile>> p3 = validMoves(perm(h, 3));
    std::vector<std::vector<tile>> p4 = validMoves(perm(h, 4));
    std::vector<std::vector<tile>> p;
    p.insert(p.end(), p3.begin(), p3.end());
    p.insert(p.end(), p4.begin(), p4.end());
    std::vector<tile> m = bestMove(p);
    return m;
}








