#ifndef Board_h
#define Board_h

#include <iostream>
#include <vector>
#include "Tile.h"

class Board {
private:
    std::vector<std::unique_ptr<Tile>> tiles;

public:
    Board(int numTiles, int numSnakes, int numLadders);
    std::string draw();
    Tile* getTile(int index);
};

#endif /* Board_h */