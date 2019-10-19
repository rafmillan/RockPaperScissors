//
// Created by Raf Millan on 10/18/19.
//

#ifndef ROCKPAPERSCISSORS_AI_H
#define ROCKPAPERSCISSORS_AI_H
class Ai: public Player{
 public: //methods accessible to everyone

  //constructors
  Ai();

 private:
  int move;
};

Ai::Ai() {
  Ai::move = -1;
}

#endif //ROCKPAPERSCISSORS_AI_H
