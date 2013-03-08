#include <GL/glut.h>
#include "Ball.h"
#include "Player.h"
#include "globalVariables.h"
Player player;
Ball ball;
const int RESX=852,RESY=480;
void display()
{
  glutSwapBuffers();           
}
void esKeyboard(unsigned char key, int x, int y)
{
  if (key=='\033') exit(0);
}
void keyboard(int key, int x, int y)
{

#define LEFT  100
#define RIGHT   102
#define ENTER '\x0a'
  switch(key)
    {
    case LEFT: {
      player.drawPlayer(-1);
      player.move(-1);
      player.drawPlayer(1);
      break;
    }
    case RIGHT:{
      player.drawPlayer(-1);
      player.move(1);
      player.drawPlayer(1);
      break;}
    }
}
void timer(int = 0)
{
  
  ball.drawBall(0);
  ball.move();
  ball.drawBall(1);
  player.drawPlayer(1);
  display();
  glutTimerFunc(5, timer, 0);
} 
int main(int argc,char** argv)
{
 glutInit(&argc, argv);
 glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
 glutInitWindowSize(RESX, RESY);
 glutInitWindowPosition(0, 86);
 glutCreateWindow("Tower");
 glClearColor(0, 0, 0, 1.0);

 glOrtho(0, RESX, RESY, 0, -1, 1);
 glutDisplayFunc(display);
 glutKeyboardFunc(esKeyboard);
 glutSpecialFunc(keyboard);
 timer();
 glutMainLoop();
 return 0;
}

//test
