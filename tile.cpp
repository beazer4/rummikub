//
// Created by Brendan Ehle on 2/10/21.
//

#include "tile.h"
tile::tile(int x, std::string y) {
    num = x;
    color = y;
}
void tile::printTile() {
    std::cout << num << "    " << color << std::endl;
}
bool tile::operator<(const tile &rhs) const{
    return (num < rhs.num);
}
int tile::getNum() {
    return num;
}
std::string tile::getColor() {
    return color;
}
