#ifndef LadderTile_h
#define LadderTile_h

#include "Tile.h"

class LadderTile : public Tile {
public:
    void applyEffect(Player& player) override;
    char getType() const override;
};

#endif /* LadderTile_h */