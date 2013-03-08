#include "Object.h"
#include <GL/glut.h>
#include "globalVariables.h"
Object::Object(int _leftTopX,int _leftTopY, int _rightTopX, int _rightTopY,int _leftLowX,int _leftLowY,int _rightLowX,int _rightLowY):leftTopX(_leftTopX), leftTopY(_leftTopY),rightTopX(_rightTopX),rightTopY(_rightTopY),leftLowX(_leftLowX),leftLowY(_leftLowY),rightLowX(_rightLowX),rightLowY(_rightLowY){}
void Object::draw(int visible)
{
  if (visible==1) glColor3f(0.0,1.0,1.0);
  else glColor3f(0.0,0.0,0.0);
      glBegin(GL_QUADS);
      glVertex2f(leftTopX,leftTopY);
      glVertex2f(rightTopX,rightTopY);
      glVertex2f(leftLowX,leftLowY);
      glVertex2f(rightLowX,rightLowY);
      glEnd();
}
