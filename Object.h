#pragma once
class Object
{
 public:
  Object(int _leftTopX,int _leftTopY, int _rightTopX, int _rightTopY,int _leftLowX,int _leftLowY,int _rightLowX,int _rightLowY);
  void draw(int visible);
  //int getWidth(){return }
  //int getHeight(){return rightTopY-rightLowY;}
  int getLeftTopY(){return points[0].y;}
  int getLeftTopX(){return points[0].x;}
  int getRightTopY(){return points[1].y;}
  int getRightTopX(){return points[1].x;}
  int getLeftLowY(){return  points[2].y;}
  int getLeftLowX(){return  points[2].x;}
  int getRightLowY(){return points[3].y;}
  int getRightLowX(){return points[3].x;}
  int getPointY(int i){return points[i].y;} 
  int getPointX(int i){return points[i].x;} 
 protected:
   struct Point
  {int x,y;} points[4];
};
