#include <iostream>
#include <cstdio>
#include <cstdlib>
#include "deck.h"
#include "hand.h"
#include <ctime>

int main() {
    srand(time(0));
    deck d;
    hand h;
    h.add(tile(8, "orange"));
    h.add(tile(7, "blue"));
    h.add(tile(9, "red"));
    h.add(tile(8, "black"));
    h.add(tile(3, "blue"));
    h.add(tile(4, "red"));
/*
    h.add(tile(1, "orange"));
    h.add(tile(2, "blue"));

    h.add(tile(5, "red"));

    h.add(tile(9, "black"));

    h.add(tile(11, "blue"));

    h.add(tile(12, "red"));
    */
    std::vector<std::vector<tile>> per = h.perm(h, 3);
    h.printPerms(per);
    return 0;
}
