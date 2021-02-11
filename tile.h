//
// Created by Brendan Ehle on 2/10/21.
//

#ifndef RUMMIKUB_TILE_H
#define RUMMIKUB_TILE_H
#include <string>
#include <iostream>

class tile {
private:
    int num;
    std::string color;
public:
    tile(int x, std::string y);
    void printTile();
    bool operator< (const tile& rhs) const;
    int getNum();
    std::string getColor();
};


#endif //RUMMIKUB_TILE_H
