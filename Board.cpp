#include "Board.h"
#include "SnakeTile.h"
#include "LadderTile.h"

Board::Board(int numTiles, int numSnakes, int numLadders) {
    tiles = std::vector<std::unique_ptr<Tile>>(numTiles, nullptr);
    int snakes = 0;
    int ladders = 0;

    while (snakes < numSnakes) {
        int index = rand() % numTiles;
        if (!tiles[index]) {
            tiles[index] = std::make_unique<SnakeTile>();
            snakes++;
        }
    }

    while (ladders < numLadders) {
        int index = rand() % numTiles;
        if (!tiles[index]) {
            tiles[index] = std::make_unique<LadderTile>();
            ladders++;
        }
    }
}

std::string Board::draw() {
    std::string brd = "";
    for (auto& tile : tiles) {
        if (tile)
            brd += tile->getType();
        else
            brd += 'N';
        brd += " ";
    }
    return brd;
}

Tile* Board::getTile(int index) {
    return tiles[index].get();
}