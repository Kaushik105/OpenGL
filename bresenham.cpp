#include <GL/glut.h>


void drawPixel(int x, int y){
  glBegin(GL_POINTS);
  glVertex2i(x,y);
  glEnd();
}

 void bresenhamLine(int x1, int y1, int x2, int y2) {
        int dx = abs(x2 - x1);
        int dy = abs(y2 - y1);

        // Direction of movement: +1 (forward/up) or -1 (backward/down)
        int sx = (x1 < x2) ? 1 : -1;
        int sy = (y1 < y2) ? 1 : -1;

        int x = x1;
        int y = y1;

        drawPixel(x, y); // Plot starting point

        // case m < 1
        if (dx > dy) {
            int p = 2 * dy - dx;
            while (x != x2) {
                x += sx; 
                if (p >= 0) {
                    y += sy;
                    p += 2 * (dy - dx);
                } else {
                    p += 2 * dy;
                  }
                drawPixel(x, y);
            }
        }
        // case m >= 1
        else {
            int p = 2 * dx - dy;
            while (y != y2) {
                y += sy; 
                if (p >= 0) {
                    x += sx;
                    p += 2 * (dx - dy);
                } else {
                    p += 2 * dx;
                }
                drawPixel(x, y);
            }
        }
    }


void display()
{
  glClear(GL_COLOR_BUFFER_BIT);

  glColor3f(0.0, 1.0, 0.0);

   bresenhamLine(50, 50, 400, 150);

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
  glutCreateWindow("Bresenham");

  myInit();

  glutDisplayFunc(display);

  glutMainLoop();

  return 0;
}