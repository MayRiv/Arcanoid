#include "Ball.h"
#include <GL/glut.h>
#include "globalVariables.h"
Ball::Ball(float _width,float _x,float _y,float _dx,float _dy):width(_width),dx(_dx),dy(_dy),x(_x),y(_y)
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
	
}
