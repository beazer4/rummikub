#include <iostream>
#include <cstdio>
#include <cstdlib>
#include "deck.h"
#include "hand.h"
#include <ctime>

int main() {
    srand(time(0));
    deck d;
    hand h("Brendan");
    h.add(tile(8, "orange"));
    h.add(tile(7, "orange"));
    h.add(tile(9, "orange"));
    h.add(tile(8, "black"));
    h.add(tile(8, "red"));
    h.add(tile(3, "blue"));
    h.add(tile(4, "red"));
    std::vector<std::vector<tile>> val = h.validMoves(h.perm(h, 3));
    h.printSets(val);
    return 0;
}
