//
// Created by Raf Millan on 10/18/19.
//
#include "Player.h"

Player::Player(){
  Player::move = -1;
}

double Player::getMove() const {
  return Player::move;
}

void Player::setMove(int aMove){
  Player::move = aMove;
}

