#pragma once
class Object
{
 public:
  Object(int _leftTopX,int _leftTopY, int _rightTopX, int _rightTopY,int _leftLowX,int _leftLowY,int _rightLowX,int _rightLowY);
  void draw(int visible);
 protected:
  int leftTopY,rightTopY,leftLowY,rightLowY;
  int leftTopX,rightTopX,leftLowX,rightLowX;
};
