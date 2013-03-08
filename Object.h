#pragma once
class Object
{
 public:
  Object(int _leftTopX,int _leftTopY, int _rightTopX, int _rightTopY,int _leftLowX,int _leftLowY,int _rightLowX,int _rightLowY);
  void draw(int visible);
  int getWidth(){return rightTopX-leftTopX;}
  int getHeight(){return rightTopY-rightLowY;}
  int getLeftTopY(){return leftTopY;}
  int getLeftTopX(){return leftTopX;}
  int getRightTopY(){return rightTopY;}
  int getRightTopX(){return rightTopX;}
  int getLeftLowY(){return leftLowY;}
  int getLeftLowX(){return leftLowX;}
  int getRightLowY(){return rightLowY;}
  int getRightLowX(){return rightLowX;}
 protected:
  int leftTopY,rightTopY,leftLowY,rightLowY;
  int leftTopX,rightTopX,leftLowX,rightLowX;
};
