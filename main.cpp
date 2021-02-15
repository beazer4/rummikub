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
    h.add(tile(8, "orange"));
    h.add(tile(8, "red"));
    h.add(tile(10, "orange"));
    h.add(tile(4, "red"));
    h.add(tile(8, "blue"));
    h.printVec(h.move(h));
    return 0;
}
