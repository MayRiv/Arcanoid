#pragma once
#include "Object.h"
class Ball : public Object
{
 public:
  Ball(int _leftTopX,int _leftTopY, int _rightTopX, int _rightTopY,int _leftLowX,int _leftLowY,int _rightLowX,int _rightLowY, int _dx, int _dy);
 Ball(int x,int y, int rad, int _dx, int _dy): Object(x,y,x+rad,y,x+rad,y+rad,x,y+rad),dx(_dx),dy(_dy) {}
  void move();
  bool ApplyPhysics(Object& object);
 private:
  int dx,dy;
};
