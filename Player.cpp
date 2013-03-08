#include "Player.h"
#include <GL/glut.h>
//test
//also test
/*Player::Player():width(100),height(10),x(10),y(460)
  {}*/
void Player::move(int i)
{  
  if (i==1) 
    {
      rightTopX+=dx;
      leftTopX+=dx;
      rightLowX+=dx;
      leftLowX+=dx;
    }
  else 
    {
      
    {
      rightTopX-=dx;
      leftTopX-=dx;
      rightLowX-=dx;
      leftLowX-=dx;
    }
    };
}

Player::Player(int _leftTopX,int _leftTopY, int _rightTopX, int _rightTopY,int _leftLowX,int _leftLowY,int _rightLowX,int _rightLowY,int _dx=10):Object( _leftTopX, _leftTopY,  _rightTopX,  _rightTopY, _leftLowX, _leftLowY, _rightLowX, _rightLowY),dx(_dx){}
