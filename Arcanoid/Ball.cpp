#include "Ball.h"
#include <GL/glut.h>
#include "globalVariables.h"
Ball::Ball(float weight,float _x,float _y,float _dx,float _dy):weight(weight),dx(_dx),dy(_dy),x(_x),y(_y)
{}
Ball::Ball():weight(100),dx(2),dy(2),x(20),y(20)
{};
void Ball::drawBall(int visible)
{
  int width=10;
  if (visible==1) glColor3f(0.0,1.0,1.0);
  else glColor3f(0.0,0.0,0.0);
      glBegin(GL_QUADS);
      glVertex2f(x,y);
      glVertex2f(x+width,y);
      glVertex2f(x+width,y+width);
      glVertex2f(x,y+width);
      glEnd();
      // glutSwapBuffers();

}
void Ball::move()
{
  x+=dx;
  y+=dy;
  if (x<0||x>852) dx*= -1;
  if (y<0) dy*=-1;
  if(y>480) exit(0);
  if (x>player.getx() && x<player.getx()+player.getWidth() && y>player.gety())  dy*=-1;
}
