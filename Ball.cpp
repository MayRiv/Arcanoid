#include "Ball.h"
#include <GL/glut.h>
#include "globalVariables.h"

Ball::Ball(int _leftTopX,int _leftTopY, int _rightTopX, int _rightTopY,int _leftLowX,int _leftLowY,int _rightLowX,int _rightLowY, int _dx, int _dy):Object( _leftTopX, _leftTopY,  _rightTopX,  _rightTopY, _leftLowX, _leftLowY, _rightLowX, _rightLowY), dx(_dx), dy(_dy){};

void Ball::move()
{
  /*rightTopX+=dx;
  rightTopY+=dy;
  leftTopX+=dx;
  leftTopY+=dy;
  rightLowX+=dx;
  rightLowY+=dy;
  leftLowX+=dx;
  leftLowY+=dy;*/
  for (int i=0;i<4;i++)
    {
      points[i].x+=dx;
      points[i].y+=dy;
    }
  if (points[0].x<0||points[1].x>RESX) dx*=-1;
  if (points[0].y<0) dy*=-1;
  if (points[3].y>RESY) exit(0);
  //  if(leftLowX>player.getx() && rightLowX<player.getx()+player.getWidth() && rightLowY> player.gety()) dy*=-1; //must be replaced by normal physics, also here myght be a mistake;
  if (points[0].x > player.getLeftLowX() && points[1].x < player.getRightLowX() && points[3].y > player.getLeftTopY()) dy*=-1; //also must be replaced by normal physics
}
