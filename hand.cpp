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


