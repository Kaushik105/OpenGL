#include <GL/glut.h>

void display()
{
  glClear(GL_COLOR_BUFFER_BIT);

  glColor3f(0.0, 1.0, 1.0);
  // walls
  glBegin(GL_POLYGON);
  glVertex2i(150, 50);
  glVertex2i(490, 50);
  glVertex2i(490, 250);
  glVertex2i(150, 250);
  glEnd();

  glColor3f(1.0, 1.0, 0.0);
  // roof
  glBegin(GL_POLYGON);
  glVertex2i(150, 250);
  glVertex2i(490, 250);
  glVertex2i(320, 400);
  glEnd();

  // gate
  glColor3f(1.0, 0.0, 0.0);
  glBegin(GL_POLYGON);
  glVertex2i(280, 50);
  glVertex2i(280, 150);
  glVertex2i(360, 150);
  glVertex2i(360, 50);
  glEnd();

  // window
  glBegin(GL_POLYGON);
  glVertex2i(400, 100);
  glVertex2i(400, 150);
  glVertex2i(460, 150);
  glVertex2i(460, 100);
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
  glutCreateWindow("House");

  glClearColor(0.0, 0.0, 0.0, 1.0);

  gluOrtho2D(0.0, 640.0, 0.0, 480.0);

  glutDisplayFunc(display);

  glutMainLoop();

  return 0;
}