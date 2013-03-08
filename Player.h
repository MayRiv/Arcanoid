#pragma once
#include "Object.h"


class Player: public Object
{
 public:
  Player(int _leftTopX,int _leftTopY, int _rightTopX, int _rightTopY,int _leftLowX,int _leftLowY,int _rightLowX,int _rightLowY,int _dx);
  void move(int);
 private: 
  int dx;
};
