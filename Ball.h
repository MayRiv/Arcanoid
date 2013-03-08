#pragma once
#include "Object.h"
class Object;
/*class Ball
{
 public:
  Ball();
  Ball(float weight,float _x,float _y,float _dx,float _dy);
  void drawBall(int);
  void move();
 private:
  float width;
  float dx,dy;
  int x,y;
  };
*/
class Ball : public Object
{
 public:
  Ball(int _leftTopX,int _leftTopY, int _rightTopX, int _rightTopY,int _leftLowX,int _leftLowY,int _rightLowX,int _rightLowY, int _dx, int _dy);
  void move();
 private:
  int dx,dy;
};
