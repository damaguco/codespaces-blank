#include "SnakeTile.h"

void SnakeTile::applyEffect(Player& player) {
    player.setTile(player.getTile() - 3);
}

char SnakeTile::getType() const {
    return 'S';
}