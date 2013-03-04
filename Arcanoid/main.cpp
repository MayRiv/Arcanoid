#include <GL/glut.h>
#include "Ball.h"
#include "Player.h"
#include "globalVariables.h"
Player player;
Ball ball;
void display()
{
  // glClear(GL_COLOR_BUFFER_BIT);
  glColor3f(0.0,1.0,1.0);
  glBegin(GL_LINES);
  glVertex2f(50,100);
  glVertex2f(100,70);
  glEnd();
  //glutSwapBuffers();           
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
  
  display();
  ball.drawBall(0);
  ball.move();
  ball.drawBall(1);
  //player.drawPlayer();
  glutSwapBuffers();
  glutTimerFunc(5, timer, 0);
} 
int main(int argc,char** argv)
{
 glutInit(&argc, argv);
 glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
 glutInitWindowSize(852, 480);
 glutInitWindowPosition(0, 86);
 glutCreateWindow("Tower");
 glClearColor(0, 0, 0, 1.0);

 glOrtho(0, 852, 480, 0, -1, 1);
 glutDisplayFunc(display);
 glutKeyboardFunc(esKeyboard);
 glutSpecialFunc(keyboard);
 timer();
 glutMainLoop();
 return 0;
}

