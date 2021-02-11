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
    bool isStraight(std::vector<tile> set);
    bool isFlush(std::vector<tile> set);
    bool isSameNum(std::vector<tile> set);
    bool difColor(std::vector<tile> set);
    bool SF(std::vector<tile> set);
    bool SnDc(std::vector<tile> set);

};


#endif //RUMMIKUB_HAND_H
