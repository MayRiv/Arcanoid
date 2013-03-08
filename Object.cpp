#include "Object.h"
#include <GL/glut.h>
#include "globalVariables.h"
Object::Object(int _leftTopX,int _leftTopY, int _rightTopX, int _rightTopY,int _leftLowX,int _leftLowY,int _rightLowX,int _rightLowY)
{
  points[0].x=_leftTopX;
  points[0].y=_leftTopY;
  points[1].x=_rightTopX;
  points[1].y=_rightTopY;
  points[2].x=_rightLowX;
  points[2].y=_rightLowY;
  points[3].x=_leftLowX;
  points[3].y=_leftLowY;
}
//MAYBE HERE IS A MISTAKE IN PARAMETRES
void Object::draw(int visible)
{
  if (visible==1) glColor3f(0.0,1.0,1.0);
  else glColor3f(0.0,0.0,0.0);
      glBegin(GL_QUADS);
      glVertex2f(points[0].x,points[0].y);
      glVertex2f(points[1].x,points[1].y);
      glVertex2f(points[3].x,points[3].y);  //SMTH wrong!
      glVertex2f(points[2].x,points[2].y);
      //glVertex2f(points[0].x,points[0].y);
 /* glVertex2f(rightTopX,rightTopY);
      glVertex2f(leftLowX,leftLowY);
      glVertex2f(rightLowX,rightLowY);*/
      glEnd();
}
