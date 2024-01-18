#ifndef MyGame_h
#define MyGame_h

#include "Dice.h"
#include "Player.h"
#include "Board.h"

class MyGame {
private:
    Board board;
    Player player1;
    Player player2;
    int turn;
    Dice dice;

public:
    MyGame();
    void start();
};

#endif /* MyGame_h */