#include <GL/glut.h>
#include <cmath> // for std::abs() and std::round()

// Function to plot an individual pixel
void drawPixel(int x, int y) {
    glBegin(GL_POINTS);
        glVertex2i(x, y);
    glEnd();
}

// DDA Line Drawing Algorithm
void ddaLine(float x1, float y1, float x2, float y2) {
    float dx = x2 - x1;
    float dy = y2 - y1;

    // Step count is determined by the greater delta to prevent gaps
    float steps = (std::abs(dx) > std::abs(dy)) ? std::abs(dx) : std::abs(dy);

    // Calculate increments per step
    float xInc = dx / steps;
    float yInc = dy / steps;

    // Starting coordinates
    float x = x1;
    float y = y1;

    // Plot initial point
    drawPixel(std::round(x), std::round(y));

    // Loop through each step and plot
    for (int i = 0; i < steps; i++) {
        x += xInc;
        y += yInc;
        drawPixel(std::round(x), std::round(y));
    }
}

void display() {
    glClear(GL_COLOR_BUFFER_BIT);

    glColor3f(1.0f, 0.5f, 0.0f); // Orange color
    glPointSize(2.0f);

    // Test 1: Gentle slope line (m < 1)
    ddaLine(50, 50, 400, 150);

    glFlush();
}

void myInit() {
    // glClearColor(0.0f, 0.0f, 0.0f, 1.0f); // Black background
    // glMatrixMode(GL_PROJECTION);
    // glLoadIdentity();
    gluOrtho2D(0.0, 640.0, 0.0, 480.0); // 2D coordinate system matching window
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(640, 480);
    glutInitWindowPosition(100, 100);
    glutCreateWindow("DDA Line Drawing Algorithm");

    myInit();
    glutDisplayFunc(display);
    glutMainLoop();

    return 0;
}
