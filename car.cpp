#include <iostream>
#include <GL/glut.h>
#include<math.h>
#include "draw.h"

using namespace std;

#define PI 3.141516

void drawCar()
{
    glColor3ub(231, 76, 60);
    glBegin(GL_QUADS);
    glVertex2f(-1.0f, -0.1275f);
    glVertex2f(-0.75f, -0.1275f);
    glVertex2f(-0.75f, -0.2275f);
    glVertex2f(-1.0f, -0.2275f);
    glEnd();
    glBegin(GL_QUADS);
    glVertex2f(-0.9f, -0.1275f);
    glVertex2f(-0.85f, -0.1275f);
    glVertex2f(-0.85f, -0.0275f);
    glVertex2f(-0.9f, -0.0275f);
    glEnd();

    glColor3ub(192, 57, 43);
    glBegin(GL_TRIANGLES);
	glVertex2f(-1.0f, -0.1275f);
	glVertex2f(-0.9f, -0.1275f);
	glVertex2f(-0.9f,  -0.0275f);

	glEnd();

	glBegin(GL_TRIANGLES);
	glVertex2f(-0.85f, -0.1275f);
	glVertex2f(-0.75f, -0.1275f);
	glVertex2f(-0.85f,  -0.0275f);

	glEnd();







	glLineWidth(2.5);
	glColor3ub(230, 126, 34);
    glBegin(GL_LINES);
	glVertex2f(-1.0f, -0.1275f);
	glVertex2f(-0.75f, -0.1275f);
	glEnd();

	glBegin(GL_LINES);
	glVertex2f(-0.75f, -0.1275f);
    glVertex2f(-0.75f, -0.2275f);
	glEnd();

	glBegin(GL_LINES);
	glVertex2f(-0.75f, -0.2275f);
    glVertex2f(-1.0f, -0.2275f);
	glEnd();

	glBegin(GL_LINES);
	glVertex2f(-0.75f, -0.2275f);
    glVertex2f(-1.0f, -0.2275f);
	glEnd();

	glBegin(GL_LINES);
	glVertex2f(-1.0f, -0.1275f);
	glVertex2f(-0.9f, -0.1275f);
	glEnd();

	glBegin(GL_LINES);
	glVertex2f(-1.0f, -0.1275f);
	glVertex2f(-0.9f,  -0.0275f);
	glEnd();

	// square
	glBegin(GL_LINES);
	glVertex2f(-0.9f, -0.1275f);
    glVertex2f(-0.85f, -0.1275f);
	glEnd();

	glBegin(GL_LINES);
	glVertex2f(-0.85f, -0.1275f);
    glVertex2f(-0.85f, -0.0275f);
	glEnd();

	glBegin(GL_LINES);
	glVertex2f(-0.85f, -0.0275f);
    glVertex2f(-0.9f, -0.0275f);
	glEnd();

	glBegin(GL_LINES);
	glVertex2f(-0.9f, -0.1275f);
	glVertex2f(-0.9f, -0.0275f);
	glEnd();

	//2nd triangle
	glBegin(GL_LINES);
	glVertex2f(-0.85f, -0.1275f);
	glVertex2f(-0.75f, -0.1275f);
	glEnd();

	glBegin(GL_LINES);
	glVertex2f(-0.75f, -0.1275f);
	glVertex2f(-0.85f,  -0.0275f);
	glEnd();

	glBegin(GL_LINES);
	glVertex2f(-0.85f, -0.1275f);
	glVertex2f(-0.85f,  -0.0275f);
	glEnd();





	GLfloat circlePointX= -0.95f;
    GLfloat circlePointY= -0.2275f;
    GLfloat radius = 0.02f;
    int triangle=40;
    GLfloat trianglePoint =2.0f * PI  ;
    glBegin (GL_TRIANGLE_FAN);
    glColor3ub(0, 0, 0);
    glVertex2f (circlePointX,circlePointY);
    for(int i= 0;i<=triangle; i++)
    {
        glVertex2f (
                    circlePointX+(radius*cos(i*trianglePoint/triangle)),
                    circlePointY+(radius*sin(i*trianglePoint/triangle))
                    );
    }
    glEnd ();
     circlePointX= -0.95f;
     circlePointY= -0.2275f;
     radius = 0.01f;
     triangle=40;
     trianglePoint =2.0f * PI  ;
    glBegin (GL_TRIANGLE_FAN);
    glColor3ub(255, 255, 255);
    glVertex2f (circlePointX,circlePointY);
    for(int i= 0;i<=triangle; i++)
    {
        glVertex2f (
                    circlePointX+(radius*cos(i*trianglePoint/triangle)),
                    circlePointY+(radius*sin(i*trianglePoint/triangle))
                    );
    }
    glEnd ();

     circlePointX= -0.80f;
     circlePointY= -0.2275f;
     radius = 0.02f;
     triangle=40;
     trianglePoint =2.0f * PI  ;
    glBegin (GL_TRIANGLE_FAN);
    glColor3ub(0, 0, 0);
    glVertex2f (circlePointX,circlePointY);
    for(int i= 0;i<=triangle; i++)
    {
        glVertex2f (
                    circlePointX+(radius*cos(i*trianglePoint/triangle)),
                    circlePointY+(radius*sin(i*trianglePoint/triangle))
                    );
    }
    glEnd ();

    circlePointX= -0.80f;
     circlePointY= -0.2275f;
     radius = 0.01f;
     triangle=40;
     trianglePoint =2.0f * PI  ;
    glBegin (GL_TRIANGLE_FAN);
    glColor3ub(255, 255, 255);
    glVertex2f (circlePointX,circlePointY);
    for(int i= 0;i<=triangle; i++)
    {
        glVertex2f (
                    circlePointX+(radius*cos(i*trianglePoint/triangle)),
                    circlePointY+(radius*sin(i*trianglePoint/triangle))
                    );
    }
    glEnd ();


}
