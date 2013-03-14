#include "Ball.h"
#include <GL/glut.h>
#include "globalVariables.h"
#include <math.h>
Ball::Ball(int _leftTopX,int _leftTopY, int _rightTopX, int _rightTopY,int _leftLowX,int _leftLowY,int _rightLowX,int _rightLowY, int _dx, int _dy):Object( _leftTopX, _leftTopY,  _rightTopX,  _rightTopY, _leftLowX, _leftLowY, _rightLowX, _rightLowY), dx(_dx), dy(_dy){};

void Ball::move()
{
 
  for (int i=0;i<4;i++)
    {
      points[i].x+=dx;
      points[i].y+=dy;
    }
  if (points[0].x<0||points[1].x>RESX) dx*=-1;
  if (points[0].y<0) dy*=-1;
  if (points[3].y>RESY) exit(0);
  ApplyPhysics(block);
  ApplyPhysics(block2);
  ApplyPhysics(block3);
  ApplyPhysics(player);
  /* if (points[0].x > player.getLeftLowX() && points[1].x < player.getRightLowX() && points[3].y > player.getLeftTopY()) dy*=-1; //also must be replaced by normal physics*/
}
//ADDED EXIT WITH CODE SAYING WHICH ANGLE GIVES IT WHEN VECT MUL RETURNES 0
bool Ball::ApplyPhysics(Object& object)
{
  bool touched=false;
  int i=0;
  double minus=1;
  // for (int i=0;i<4&&!touched;i++)
  while((i<4) && (touched==false))
    {                      //HERE MIGHT BE A PROBLEM-I HAVE A PROBLEM WITH INDEX
    if (points[i].x>=object.getPointX(0) && points[i].x<=object.getPointX(1) &&
	points[i].y>=object.getPointY(0) && points[i].y<=object.getPointY(3))
      {
	touched=true;
	double min=sqrt( pow((points[i].x-object.getPointX(0)),2) + pow((points[i].y-object.getPointY(0)),2));
	int minIndex=0;
	for (int j=1;j<4;j++)
	  if  ( min>sqrt( pow((points[i].x-object.getPointX(j)),2) + pow((points[i].y-object.getPointY(j)),2)))
	    {
	      min=sqrt( pow((points[i].x-object.getPointX(j)),2) + pow((points[i].y-object.getPointY(j)),2));
	      minIndex=j;
	    }

	//maybe i should add mines in parentethes with y
	if (minIndex==0) 
	  {
	    minus=1;
	    if ( minus * (dx*(points[i].y-object.getPointY(minIndex)) - (dy*(object.getPointY(minIndex)-points[i].x)))>0) dx*=-1;
	    else dy*=-1;
	  }
	if (minIndex==1) 
	  {
	    minus=-1;
	    if ( minus * (dx*(points[i].y-object.getPointY(minIndex)) - (dy*(object.getPointY(minIndex)-points[i].x)))>0) dx*=-1;
	    else  dy*=-1;
	  }
	if (minIndex==2) 
	  {
	    minus=1;
	    if ( minus * (dx*(points[i].y-object.getPointY(minIndex)) - (dy*(object.getPointY(minIndex)-points[i].x)))>0) dx*=-1;
	    else    dy*=-1;
	  }
	if (minIndex==3) 
	  {
	    minus=-1;
	    if ( minus * (dx*(points[i].y-object.getPointY(minIndex)) - (dy*(object.getPointY(minIndex)-points[i].x)))>=0) dx*=-1;
	    else dy*=-1;
	  }
	
	
      }
    i++;
    }
  return touched;
}
  
