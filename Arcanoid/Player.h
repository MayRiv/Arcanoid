#pragma once
class Player
{
 public:
  Player();
  void drawPlayer(int);
  void move(int);
  void setx(int);
  void setx(){};
  int getx(){return x;}
  int gety(){return y;}
  int getWidth(){return width;}
  int getHeight(){return height;}
 private:
  int x,y,width,height;
};
