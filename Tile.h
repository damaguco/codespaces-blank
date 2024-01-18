#ifndef Tile_h
#define Tile_h

class Tile {

public:
    virtual void applyEffect(Player& player) = 0;
    virtual char getType() const = 0;

};

#endif /* Tile_h */