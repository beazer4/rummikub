//
// Created by Brendan Ehle on 2/12/2021.
//

#ifndef RUMMIKUB_RUN_H
#define RUMMIKUB_RUN_H
#include "deck.h"
#include "tile.h"
#include "hand.h"
#include <vector>
#include <algorithm>
#include <utility>

class run {
private:
    std::vector<tile> curRun;
    std::string player;
    int length;
public:
    run(std::vector<tile> r, std::string p);
};


#endif //RUMMIKUB_RUN_H
