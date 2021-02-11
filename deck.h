//
// Created by Brendan Ehle on 2/10/21.
//

#ifndef RUMMIKUB_DECK_H
#define RUMMIKUB_DECK_H
#include <map>
#include <string>
#include <iostream>
#include <cstdlib>
#include "tile.h"
#include <vector>


class deck {
private:
    int numTiles = 108;
    int tilesRem;
    std::vector<tile> curDeck;
public:
    deck();
    tile randomDraw();
    void printDeck();
};


#endif //RUMMIKUB_DECK_H
