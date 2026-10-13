#include <GL/glut.h>

void display()
{
  glClear(GL_COLOR_BUFFER_BIT);

  glColor3f(0.0, 1.0, 0.0);
  glLineWidth(2.0);

  glBegin(GL_TRIANGLES);
  glVertex2i(320, 350);
  glVertex2i(200, 150);
  glVertex2i(440, 150);

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
  glutCreateWindow("Lab 0: Point Plotting");

  myInit();

  glutDisplayFunc(display);

  glutMainLoop();

  return 0;
}