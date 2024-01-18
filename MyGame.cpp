#include <iostream>
#include <stdio.h>
#include "Dice.h"
#include "Board.h"
#include "MyGame.h"

using namespace std;

MyGame::MyGame() : board(30,3,3), player1(1), player(2), turn(1), dice() {
}

void MyGame::start() {
    player1.setTile(1);
    player2.setTile(1);
    char option = 'C';

    while (option != 'E' && turn <= MAX_TURN &&
           player1.getTile() < 30 && player2.getTile() < 30) {
        std::cout << "Press C to continue next turn, or E to end the game:" << std::endl;
        std::cin >> option;

        if (option == 'C') {
            std::cout << to_string(turn) << " ";
            int number = dice.roll();

            if (turn % 2 != 0) {
                // Player 1's turn
                std::cout << player1.draw() << " " << number << " ";
                player1.setTile(player1.getTile() + number);

                Tile* currentTile = board.getTile(player1.getTile() - 1);
                std::cout << currentTile->getType() << " ";
                currentTile->applyEffect(player1);

                std::cout << player1.getTile() << std::endl;
            } else {
                // Player 2's turn
                std::cout << player2.draw() << " " << number << " ";
                player2.setTile(player2.getTile() + number);

                Tile* currentTile = board.getTile(player2.getTile() - 1);
                std::cout << currentTile->getType() << " ";
                currentTile->applyEffect(player2);

                std::cout << player2.getTile() << std::endl;
            }

            turn++;
        } else if (option != 'E') {
            std::cout << "Invalid option, please press C to continue next turn or E to end the game" << std::endl;
        }
    }

    std::cout << "-- GAME OVER --" << std::endl;

    if (turn >= MAX_TURN)
        std::cout << "The maximum number of turns has been reached..." << std::endl;
    else if (player1.getTile() >= 30)
        std::cout << "Player 1 is the winner!!!" << std::endl;
    else if (player2.getTile() >= 30)
        std::cout << "Player 2 is the winner!!!" << std::endl;
    else
        std::cout << "Thanks for playing!!!" << std::endl;
}
