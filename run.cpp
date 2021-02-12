//
// Created by Brendan Ehle on 2/12/2021.
//

#include "run.h"

#include <utility>


run::run(std::vector<tile> r, std::string p) {
    curRun = std::move(r);
    player = std::move(p);
    length = curRun.size();
}
