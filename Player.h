#ifndef Player_h
#define Player_h

#include "Board.h"

class Player {
private:
    int tile;

public:
    Player(int playerNumber);
    void setTile(int newTile);
    int getTile() const;
    std::string draw() const;
};

#endif /* Player_h */