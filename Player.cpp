#include "Player.h"

Player::Player(int playerNumber) : tile(1) {
}

void Player::setTile(int newTile) {
    tile = newTile;
}

int Player::getTile() const {
    return tile;
}

std::string Player::draw() const {
    return "Player " + std::to_string(tile);
}