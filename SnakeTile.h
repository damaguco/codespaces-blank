#ifndef SnakeTile_h
#define SnakeTile_h

#include "Tile.h"

class SnakeTile : public Tile {
public:
    void applyEffect(Player& player) override;
    char getType() const override;
};

#endif /* SnakeTile_h */

