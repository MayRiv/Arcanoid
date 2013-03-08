#include "Ball.h"
#include <GL/glut.h>
#include "globalVariables.h"
/*Ball::Ball(float _width,float _x,float _y,float _dx,float _dy):width(_width),dx(_dx),dy(_dy),x(_x),y(_y)
{}
Ball::Ball():width(10),dx(2),dy(2),x(20),y(20)
{};
void Ball::drawBall(int visible)
{
  if (visible==1) glColor3f(0.0,1.0,1.0);
  else glColor3f(0.0,0.0,0.0);
      glBegin(GL_QUADS);
      glVertex2f(x,y);
      glVertex2f(x+width,y);
      glVertex2f(x+width,y+width);
      glVertex2f(x,y+width);
      glEnd();

}
void Ball::move()
{
  x+=dx;
  y+=dy;
  if (x<0||x>RESX-width) dx*= -1;
  if (y<0) dy*=-1;
  if(y>480) exit(0);
  if (x>player.getx() && x<player.getx()+player.getWidth() && y>player.gety()-player.getHeight() )dy*=-1;
	
}*/


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
  if(leftLowX>player.getx() && rightLowX<player.getx()+player.getWidth() && rightLowY> player.gety()) dy*=-1; //must be replaced by normal physics, also here myght be a mistake;
}
