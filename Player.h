//
// Created by Raf Millan on 10/18/19.
//

#ifndef ROCKPAPERSCISSORS_PLAYER_H
#define ROCKPAPERSCISSORS_PLAYER_H

class Player {
 public: //methods accessible to everyone

  //constructors
  Player();
  //getters and setters
  double getMove() const;
  void setMove(int move);

 private:
  int move;
};
#endif //ROCKPAPERSCISSORS_PLAYER_H
