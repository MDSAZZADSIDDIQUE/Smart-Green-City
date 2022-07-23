#include <windows.h>
#include <GL/glut.h>


#include "draw.h"

GLfloat position = 0.0;
GLfloat speed = 0.1;

void update (int value)
{
    if (position < -2)
        position = 1.0f;

    position -= speed;

    glutPostRedisplay();
    glutTimerFunc(100, update, 0);
}



void init()
{
    glClearColor(0.0, 0.0, 0.0, 1.0);
}

void display()
{
    glClear(GL_COLOR_BUFFER_BIT);


    // River
    glColor3ub(52, 152, 219);
    glBegin(GL_QUADS);
    glVertex2f(-1.0f, -0.33f);
    glVertex2f(1.0f, -0.33f);
    glVertex2f(1.0f, -1.0f);
    glVertex2f(-1.0f, -1.0f);
    glEnd();

    // Sky
    glColor3ub(116, 185, 255);
    glBegin(GL_QUADS);
    glVertex2f(-1.0f, 1.0f);
    glVertex2f(1.0f, 1.0f);
    glVertex2f(1.0f, -0.33f);
    glVertex2f(-1.0f, -0.33f);
    glEnd();

    glPushMatrix();
    glTranslatef(position, 0.0f, 0.0f);
    glColor3ub(41, 128, 185);

    // 1st wave
    glBegin(GL_QUADS);
    glVertex2f(1.0f, -0.33f);
    glVertex2f(0.5f, -0.33f);
    glVertex2f(0.5f, -0.38f);
    glVertex2f(1.0f, -0.38f);
    glEnd();

    // 2nd wave
    glBegin(GL_QUADS);
    glVertex2f(0.95f, -0.38f);
    glVertex2f(0.55f, -0.38f);
    glVertex2f(0.55f, -0.43f);
    glVertex2f(0.95f, -0.43f);
    glEnd();

    // 3rd wave
    glBegin(GL_QUADS);
    glVertex2f(0.90f, -0.43f);
    glVertex2f(0.60f, -0.43f);
    glVertex2f(0.60f, -0.48f);
    glVertex2f(0.90f, -0.48f);
    glEnd();

    // 4th wave
    glBegin(GL_QUADS);
    glVertex2f(0.85f, -0.48f);
    glVertex2f(0.65f, -0.48f);
    glVertex2f(0.65f, -0.53f);
    glVertex2f(0.85f, -0.53f);
    glEnd();

    // 5th wave
    glBegin(GL_QUADS);
    glVertex2f(0.80f, -0.53f);
    glVertex2f(0.70f, -0.53f);
    glVertex2f(0.70f, -0.58f);
    glVertex2f(0.80f, -0.58f);
    glEnd();

    // Negative Axis
    glTranslatef(position, 0.0f, 0.0f);
    // 1st wave
    glBegin(GL_QUADS);
    glVertex2f(-1.0f, -0.33f);
    glVertex2f(-0.5f, -0.33f);
    glVertex2f(-0.5f, -0.38f);
    glVertex2f(-1.0f, -0.38f);
    glEnd();

    // 2nd wave
    glBegin(GL_QUADS);
    glVertex2f(-0.95f, -0.38f);
    glVertex2f(-0.55f, -0.38f);
    glVertex2f(-0.55f, -0.43f);
    glVertex2f(-0.95f, -0.43f);
    glEnd();

    // 3rd wave
    glBegin(GL_QUADS);
    glVertex2f(-0.90f, -0.43f);
    glVertex2f(-0.60f, -0.43f);
    glVertex2f(-0.60f, -0.48f);
    glVertex2f(-0.90f, -0.48f);
    glEnd();

    // 4th wave
    glBegin(GL_QUADS);
    glVertex2f(-0.85f, -0.48f);
    glVertex2f(-0.65f, -0.48f);
    glVertex2f(-0.65f, -0.53f);
    glVertex2f(-0.85f, -0.53f);
    glEnd();

    // 5th wave
    glBegin(GL_QUADS);
    glVertex2f(-0.80f, -0.53f);
    glVertex2f(-0.70f, -0.53f);
    glVertex2f(-0.70f, -0.58f);
    glVertex2f(-0.80f, -0.58f);
    glEnd();


    glPopMatrix();

    // Road
glColor3ub(127, 140, 141);

    glBegin(GL_QUADS);
    glVertex2f(-1.0f, -0.165f);
    glVertex2f(1.0f, -0.165f);
    glVertex2f(1.0f, -0.2475f);
    glVertex2f(-1.0f, -0.2475f);
    glEnd();

    glColor3ub(149, 165, 166);
    glBegin(GL_QUADS);
    glVertex2f(-1.0f, -0.2475f);
    glVertex2f(1.0f, -0.2475f);
    glVertex2f(1.0f, -0.33f);
    glVertex2f(-1.0f, -0.33f);
    glEnd();

    // Grass
    glColor3ub(46, 204, 113);
    glBegin(GL_QUADS);
    glVertex2f(-1.0f, -0.115f);
    glVertex2f(1.0f, -0.115f);
    glVertex2f(1.0f, -0.165f);
    glVertex2f(-1.0f, -0.165f);
    glEnd();


    // Tree
    drawTree(39, 174, 96, -1.0f, 0.0f);
    drawTree(46, 204, 113, -0.81f, 0.0f);
    drawTree(39, 174, 96, -0.61f, 0.0f);
    drawTree(46, 204, 113, -0.41f, 0.0f);
    drawTree(39, 174, 96, -0.21f, 0.0f);
    drawTree(46, 204, 113, -0.01f, 0.0f);
    drawTree(39, 174, 96, +0.21f, 0.0f);
    drawTree(46, 204, 113, +0.41f, 0.0f);
    drawTree(39, 174, 96, +0.61f, 0.0f);
    drawTree(46, 204, 113, +0.81f, 0.0f);
    drawTree(39, 174, 96, +1.0f, 0.0f);

    // Car
    glPushMatrix();
    glTranslatef(-position, 0.0f, 0.0f);
    drawCar();
    glPopMatrix();

    glFlush();
}

int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitWindowSize(1920, 1080);
    glutCreateWindow("Smart Green City");
    init();
    glutDisplayFunc(display);
    glutTimerFunc(100, update, 0);
    glutMainLoop();
    return 0;
}
