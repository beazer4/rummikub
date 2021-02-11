#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include "deck.h"
#include "hand.h"

int main() {
    srand(time(0));
    deck d;
    hand h;
    tile t1 = tile(8, "blue");
    tile t2 = tile(8, "blue");
    tile t3 = tile(8, "red");
    std::vector<tile> hand1 = {t1, t2, t3};
    std::cout << h.isStraight(hand1) << std::endl;
    std::cout << h.isFlush(hand1) << std::endl;
    std::cout << h.isSameNum(hand1) << std::endl;
    std::cout << h.difColor(hand1) << std::endl;
    return 0;
}
