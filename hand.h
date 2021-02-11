//
// Created by Brendan Ehle on 2/10/21.
//

#ifndef RUMMIKUB_HAND_H
#define RUMMIKUB_HAND_H
#include "deck.h"
#include <map>
#include <string>
#include <iostream>
#include "tile.h"
#include <vector>
#include <algorithm>

class hand {
private:
    int numTiles;
    std::vector<tile> curHand;
public:
    hand();
    void add(tile t);
    void openHand(deck& d);
    void printHand();
    tile getTile(int i);
    std::vector<tile> h2v();
    bool isStraight(std::vector<tile> set);
    bool isFlush(std::vector<tile> set);
    bool isSameNum(std::vector<tile> set);
    bool difColor(std::vector<tile> set);
    bool SF(std::vector<tile> set);
    bool SnDc(std::vector<tile> set);
    std::vector<std::vector<tile>> perm(hand& h, int num);
    void printPerms(std::vector<std::vector<tile>> perms);
    void printVec(std::vector<tile> perm);
};


#endif //RUMMIKUB_HAND_H
