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
#include <utility>

class hand {
private:
    int numTiles;
    std::vector<tile> curHand;
    std::string player;
public:
    hand(std::string player1);
    void add(tile t);
    void openHand(deck& d);
    void printHand();
    tile getTile(int i);
    std::string getPlayer();
    std::vector<tile> h2v();
    bool isStraight(std::vector<tile> set);
    bool isFlush(std::vector<tile> set);
    bool isSameNum(std::vector<tile> set);
    bool difColor(std::vector<tile> set);
    bool SF(const std::vector<tile>& set);
    bool SnDc(const std::vector<tile>& set);
    std::vector<std::vector<tile>> perm(hand& h, int num);
    static void printSets(std::vector<std::vector<tile>> sets);
    static void printVec(std::vector<tile> perm);
    std::vector<std::vector<tile>> validMoves(std::vector<std::vector<tile>> perms);
    int runScore(std::vector<tile> run);
    std::vector<tile> bestMove(std::vector<std::vector<tile>> all);
};


#endif //RUMMIKUB_HAND_H
