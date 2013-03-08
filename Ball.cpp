#include "Ball.h"
#include <GL/glut.h>
#include "globalVariables.h"

Ball::Ball(int _leftTopX,int _leftTopY, int _rightTopX, int _rightTopY,int _leftLowX,int _leftLowY,int _rightLowX,int _rightLowY, int _dx, int _dy):Object( _leftTopX, _leftTopY,  _rightTopX,  _rightTopY, _leftLowX, _leftLowY, _rightLowX, _rightLowY), dx(_dy), dy(_dy){};

void Ball::move()
{
  rightTopX+=dx;
  rightTopY+=dy;
  leftTopX+=dx;
  leftTopY+=dy;
  rightLowX+=dx;
  rightLowY+=dy;
  leftLowX+=dx;
  leftLowY+=dy;
  if (leftTopX<0||rightTopX>RESX) dx*=-1;
  if (rightTopY<0) dy*=-1;
  if (rightLowY>RESY) exit(0);
  //  if(leftLowX>player.getx() && rightLowX<player.getx()+player.getWidth() && rightLowY> player.gety()) dy*=-1; //must be replaced by normal physics, also here myght be a mistake;
  if (leftLowX < player.getLeftLowX() && rightLowX > player.getRightLowX() && rightLowY > player.getLeftTopY()) dy*=-1; //also must be replaced by normal physics
}
