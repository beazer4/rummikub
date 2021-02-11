//
// Created by Brendan Ehle on 2/10/21.
//

#include "deck.h"

deck::deck() {
    curDeck.emplace_back(0, "blue");
    curDeck.emplace_back(0, "black");
    curDeck.emplace_back(0, "red");
    curDeck.emplace_back(0, "orange");
    for (int i = 1;i <= 13; i++) {
        curDeck.emplace_back(i, "blue");
        curDeck.emplace_back(i, "blue");
        curDeck.emplace_back(i, "black");
        curDeck.emplace_back(i, "black");
        curDeck.emplace_back(i, "red");
        curDeck.emplace_back(i, "red");
        curDeck.emplace_back(i, "orange");
        curDeck.emplace_back(i, "orange");
    }
    tilesRem = curDeck.size();

}
tile deck::randomDraw() {
    int randTile = rand() % curDeck.size();
    tile t = curDeck[randTile];
    curDeck.erase(curDeck.begin() + randTile);
    tilesRem -= 1;
    return t;
}
void deck::printDeck() {
    for (int i = 0; i < curDeck.size(); i++) {
        curDeck[i].printTile();
    }
}
