#include "Player.h"
#include <GL/glut.h>
//test
Player::Player():width(100),height(10),x(10),y(460)
{}
void Player::drawPlayer(int visible)
{
  if (visible==1) glColor3f(0.0,1.0,1.0);
  else glColor3f(0.0,0.0,0.0);
  glBegin(GL_QUADS);
  glVertex2f(x,y);
  glVertex2f(x+width,y);
  glVertex2f(x+width,y+height);
  glVertex2f(x,y+height);
  glEnd();
  // glutSwapBuffers();
}
void Player::move(int i)
{  
  int dx=10;
  if (i==1) x+=dx;
  else x-=dx;
}
void Player::setx(int _x){x=_x;}
