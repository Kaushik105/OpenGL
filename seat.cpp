#include <GL/glut.h>

void display()
{
  glClear(GL_COLOR_BUFFER_BIT);

  glLineWidth(2.0);
  
  glColor3f(0.0, 1.0, 1.0);

  glBegin(GL_LINES);
  glVertex2i(50, 50);
  glVertex2i(100, 50);
  glVertex2i(100, 50);
  glVertex2i(100, 150);
  glVertex2i(100, 150);
  glVertex2i(150, 150);
  glEnd();

  glColor3f(1.0, 0.0, 0.0);
  glBegin(GL_LINES);
  glVertex2i(150, 150);
  glVertex2i(150, 50);
  glVertex2i(150, 50);
  glVertex2i(200, 50);
  glVertex2i(200, 50);
  glVertex2i(200, 150);
  glEnd();

  glColor3f(0.0, 1.0, 0.0);
  glBegin(GL_LINES);
  glVertex2i(200, 150);
  glVertex2i(250, 150);
  glVertex2i(250, 150);
  glVertex2i(250, 50);
  glVertex2i(250, 50);
  glVertex2i(300, 50);
  glVertex2i(300, 50);
  glVertex2i(300, 150);
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
  glutCreateWindow("Seat");

    glClearColor(0.0, 0.0, 0.0, 1.0);

  gluOrtho2D(0.0, 640.0, 0.0, 480.0);

  glutDisplayFunc(display);

  glutMainLoop();

  return 0;
}