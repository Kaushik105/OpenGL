#include <GL/glut.h>

void display()
{
  glClear(GL_COLOR_BUFFER_BIT);

  glLineWidth(2.0);
  
  glColor3f(0.0, 1.0, 1.0);
  //walls
  glBegin(GL_POLYGON);
  glVertex2i(200, 150);
  glVertex2i(440, 150);
  glVertex2i(440, 250);
  glVertex2i(200, 250);
  glEnd();
  
  
  glColor3f(1.0, 1.0, 0.0);
  glBegin(GL_POLYGON);
  glVertex2i(150, 250);
  glVertex2i(490, 250);
  glVertex2i(320, 400);
  glEnd();

  glColor3f(0.4, 0.0, 0.1);

  glBegin(GL_POLYGON);
  glVertex2i(290, 150);
  glVertex2i(260, 100);
  glVertex2i(290, 50);
  glVertex2i(350, 50);
  glVertex2i(380, 100);
  glVertex2i(350, 150);
  glEnd();
  glFlush();
}

void myInit()
{
  glClearColor(0.0, 0.0, 0.0, 1.0);

  gluOrtho2D(0.0, 640.0, 0.0, 480.0);
}

int main(int argc, char **argv)
{
  glutInit(&argc, argv);
  glutInitDisplayMode(GLUT_RGB);


  glutInitWindowSize(640, 480);
  glutInitWindowPosition(100, 100);
  glutCreateWindow("shapes");

  glClearColor(0.0, 0.0, 0.0, 1.0);

  gluOrtho2D(0.0, 640.0, 0.0, 480.0);

  glutDisplayFunc(display);

  glutMainLoop();

  return 0;
}