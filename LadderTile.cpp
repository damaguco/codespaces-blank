#include "LadderTile.h"

void LadderTile::applyEffect(Player& player) {
    player.setTile(player.getTile() + 3);
}

char LadderTile::getType() const {
    return 'L';
}
