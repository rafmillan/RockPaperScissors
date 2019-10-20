//
// Created by Raf Millan on 10/18/19.
//
#include "Player.h"
#include <random>

#ifndef ROCKPAPERSCISSORS_ROCKPAPERSISSORS_H
#define ROCKPAPERSCISSORS_ROCKPAPERSISSORS_H

template<typename RandomNumberGenerator>
int getRandomInt(int min, int max, RandomNumberGenerator& rng);

template<typename RandomNumberGenerator>
int getRandomInt(int min, int max, RandomNumberGenerator& rng) {
  std::uniform_int_distribution<int> dist(min, max);
  return dist(rng);
}

int playGame(Player& p1, Player& p2, int seed);
void promptPlayer(Player& player);
void promptAi(Player& ai, int seed);
int compare(Player& player, Player& ai); //1 if player wins, 0 if ai wins, 2 if tie
#endif //ROCKPAPERSCISSORS_ROCKPAPERSISSORS_H
