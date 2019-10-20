//
// Created by Raf Millan on 10/18/19.
//
#include <iostream>
#include <string>
#include <vector>
#include <random>
#include "RockPaperScissors.h"
#include "Player.h"

int playGame(Player& p1, Player& p2, int seed){
  bool winner = false, validInput = false;
  std::string replay = " ";
  std::vector<std::string> valid = {"y", "yes", "(y)es", "n", "no", "(n)o"};
  do {
    promptPlayer(p1);
    promptAi(p2, seed);
    if (compare(p1, p2) == 1 || compare(p1, p2) == 2) {
      winner = true;
    }
  }while(!winner);
  do{
    std::cout << "Would you like to replay the game?\nEnter (Y)es or (N)o: ";
    std::cin >> replay;
    for(int i = 0; i < valid.size()-1; i++){
      if(replay == valid.at(i)) //todo add case insensitivity{
        validInput = true;
      if(i < 4){//yes
        break;
      }
      if(i >= 4){//no
        return 0;
      }
    }
  }while(!validInput);
  return 0;
}
void promptPlayer(Player& player){
  std::vector<std::string> valid = {"r", "rock", "(r)ock", "p", "paper", "(p)aper", "s", "scissors", "(s)cissors"};
  std::string input;
  int move = -1;
  bool validInput = false;
  do{
    std::cout << "Enter (R)ock, P(aper), or (S)cissors for your move: ";
    std::cin >> input;
    for(int i = 0; i < valid.size()-1; i++){
      if(input == valid.at(i)) //todo add case insensitivity
      {
        validInput = true;
        if(i <= 2){//rock
          move = 0;
        }
        if(i > 3 && i <= 5){//paper
          move = 1;
        }
        if(i > 5){//scissors
          move = 2;
        }
      }
    }
    player.setMove(move);
  }while(!validInput);
}
void promptAi(Player& ai, int seed){
  //Todo implement random number generator to generate move
  int move, min = 0, max = 2;
  std::minstd_rand generator(seed);
  move = getRandomInt(min, max, generator);
  std::cout << move << std::endl;
  ai.setMove(move);
  if(move == 0){//rock
    std::cout << "The ai played rock." << std::endl;
  }
  else if(move == 1){//paper
    std::cout << "The ai played paper." << std::endl;
  }
  else if(move == 2){//scissors
    std::cout << "The ai played scissors." << std::endl;
  }
}

int compare(Player& player, Player& ai){
  //Rock = 0, Paper = 1, Scissors = 2;
  //1>0>2>1
  int x = 2;
  if(player.getMove() == ai.getMove()){
    std::cout << "Keep playing until someone wins." << std::endl;
    return 2;
  }
  else if(player.getMove() == 0 && ai.getMove() == 1){
    x = 0;
    std::cout << "The AI wins :(" << std::endl;
  }
  else if(player.getMove() == 0 && ai.getMove() == 2){
    x = 1;
    std::cout << "You win!" << std::endl;
  }
  else if(player.getMove() == 1 && ai.getMove() == 0){
    x = 1;
    std::cout << "You win!" << std::endl;
  }
  else if(player.getMove() == 1 && ai.getMove() == 2){
    x = 0;
    std::cout << "The AI wins :(" << std::endl;
  }
  else if(player.getMove() == 2 && ai.getMove() == 0){
    x = 0;
    std::cout << "The AI wins :(" << std::endl;
  }
  else if(player.getMove() == 2 && ai.getMove() == 1){
    x = 1;
    std::cout << "You win!" << std::endl;
  }
  return x;
}