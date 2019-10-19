//
// Created by Raf Millan on 10/18/19.
//
#include "Player.h"

#ifndef ROCKPAPERSCISSORS_ROCKPAPERSISSORS_H
#define ROCKPAPERSCISSORS_ROCKPAPERSISSORS_H

int playGame(Player& p1, Player& p2);
void promptPlayer(Player& player);
void promptAi(Player& ai);
int compare(Player& player, Player& ai); //1 if player wins, 0 if ai wins, 2 if tie
#endif //ROCKPAPERSCISSORS_ROCKPAPERSISSORS_H
