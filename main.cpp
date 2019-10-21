#include <iostream>
#include "RockPaperScissors.h"
#include "Player.h"

//Command line arguments and stuff here
int main(int argc, char** argv) {
    int seed;
    if(argc >= 2){
      seed = std::chrono::system_clock::now().time_since_epoch().count();
    }
    else{seed = std::stoi(argv[1]);}
    Player p1;
    Player ai;
    playGame(p1, ai, seed);
  return 0;
}