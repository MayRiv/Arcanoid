#include <GL/glut.h>
#include "Ball.h"
#include "Player.h"
#include "globalVariables.h"
#include "Object.h"
Player player(10,460,110,460,110,470,10,470,10);
//Ball ball(30,70,40,70,40,80,30,80,2,0);
//Ball ball(75,60,19,0,2);
Object block(70,70,140,70,140,140,70,140);
//Ball ball( 245,3,10,0,2);
Ball ball(  135,35,10,2,2);
Object block2(260,260,350,260,350,350,260,350);
Object block3(580,30,730,30,730,240,580,240);
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
      player.draw(-1);
      player.move(-1);
      player.draw(1);
      break;
    }
    case RIGHT:{
      player.draw(-1);
      player.move(1);
      player.draw(1);
      break;}
    }
}
void timer(int = 0)
{
  
 
  ball.draw(0);
  ball.move();
  block.draw(1);
  block2.draw(1);
  block3.draw(1);
  ball.draw(1);
  player.draw(1);
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
