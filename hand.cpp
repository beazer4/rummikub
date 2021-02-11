//
// Created by Brendan Ehle on 2/10/21.
//

#include "hand.h"

hand::hand() {
    numTiles = 0;
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
bool hand::SF(std::vector<tile> set) {
    return (isFlush(set) && isStraight(set));
}
bool hand::SnDc(std::vector<tile> set) {
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
        perm.push_back(tiles);
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
void hand::printPerms(std::vector<std::vector<tile>> perms) {
    for (int i=0; i < perms.size(); i++){
        printVec(perms[i]);
        std::cout << std::endl;
    }
}





