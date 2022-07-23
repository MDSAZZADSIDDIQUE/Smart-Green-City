#include <iostream>
#include <GL/glut.h>
#include<math.h>
#include "draw.h"

using namespace std;

#define PI 3.141516

void drawTree(int leavesRed, int leavesGreen, int leavesBlue, float treeBodyX, float treeBodyY)
{
    glColor3ub(102, 51, 0);
    glBegin(GL_QUADS);
    glVertex2f(treeBodyX, treeBodyY);
    glVertex2f(treeBodyX + 0.025f, treeBodyY);
    glVertex2f(treeBodyX + 0.025f, -0.115f);
    glVertex2f(treeBodyX, -0.115f);
    glEnd();



    GLfloat circlePointX=treeBodyX + 0.0125f;
    GLfloat circlePointY= treeBodyY + 0.05;
    GLfloat radius = 0.05f;
    int triangle=40;
    GLfloat trianglePoint =2.0f * PI  ;
    glBegin (GL_TRIANGLE_FAN);
    glColor3ub(leavesRed, leavesGreen, leavesBlue);
    glVertex2f (circlePointX,circlePointY);
    for(int i= 0;i<=triangle; i++)
    {
        glVertex2f (
                    circlePointX+(radius*cos(i*trianglePoint/triangle)),
                    circlePointY+(radius*sin(i*trianglePoint/triangle))
                    );
    }
    glEnd ();



    circlePointX=treeBodyX - 0.09f; circlePointY=  treeBodyY + 0.05f; radius = 0.05f;
    triangle=40;
    trianglePoint =2.0f * PI  ;
    glBegin (GL_TRIANGLE_FAN);
    glColor3ub(leavesRed, leavesGreen, leavesBlue);
    glVertex2f (circlePointX,circlePointY);
    for(int i= 0;i<=triangle; i++)
    {
        glVertex2f (
                    circlePointX+(radius*cos(i*trianglePoint/triangle)),
                    circlePointY+(radius*sin(i*trianglePoint/triangle))
                    );
    }
    glEnd ();



    circlePointX=treeBodyX - 0.065f; circlePointY=  treeBodyY + 0.025f; radius = 0.05f;
    triangle=40;
    trianglePoint =2.0f * PI  ;
    glBegin (GL_TRIANGLE_FAN);
    glColor3ub(leavesRed, leavesGreen, leavesBlue);
    glVertex2f (circlePointX,circlePointY);
    for(int i= 0;i<=triangle; i++)
    {
        glVertex2f (
                    circlePointX+(radius*cos(i*trianglePoint/triangle)),
                    circlePointY+(radius*sin(i*trianglePoint/triangle))
                    );
    }
    glEnd ();


    circlePointX=treeBodyX + 0.085f; circlePointY=  treeBodyY + 0.025f; radius = 0.05f;
    triangle=40;
    trianglePoint =2.0f * PI  ;
    glBegin (GL_TRIANGLE_FAN);
    glColor3ub(leavesRed, leavesGreen, leavesBlue);
    glVertex2f (circlePointX,circlePointY);
    for(int i= 0;i<=triangle; i++)
    {
        glVertex2f (
                    circlePointX+(radius*cos(i*trianglePoint/triangle)),
                    circlePointY+(radius*sin(i*trianglePoint/triangle))
                    );
    }
    glEnd ();

    circlePointX=treeBodyX + 0.11f; circlePointY=  treeBodyY + 0.05f; radius = 0.05f;
    triangle=40;
    trianglePoint =2.0f * PI  ;
    glBegin (GL_TRIANGLE_FAN);
    glColor3ub(leavesRed, leavesGreen, leavesBlue);
    glVertex2f (circlePointX,circlePointY);
    for(int i= 0;i<=triangle; i++)
    {
        glVertex2f (
                    circlePointX+(radius*cos(i*trianglePoint/triangle)),
                    circlePointY+(radius*sin(i*trianglePoint/triangle))
                    );
    }
    glEnd ();

    circlePointX=treeBodyX-0.04f; circlePointY=  treeBodyY + 0.10f; radius = 0.05f;
    triangle=40;
    trianglePoint =2.0f * PI  ;
    glBegin (GL_TRIANGLE_FAN);
    glColor3ub(leavesRed, leavesGreen, leavesBlue);
    glVertex2f (circlePointX,circlePointY);
    for(int i= 0;i<=triangle; i++)
    {
        glVertex2f (
                    circlePointX+(radius*cos(i*trianglePoint/triangle)),
                    circlePointY+(radius*sin(i*trianglePoint/triangle))
                    );
    }
    glEnd ();

    circlePointX=treeBodyX + 0.06f; circlePointY=  treeBodyY + 0.10f; radius = 0.05f;
    triangle=40;
    trianglePoint =2.0f * PI  ;
    glBegin (GL_TRIANGLE_FAN);
    glColor3ub(leavesRed, leavesGreen, leavesBlue);
    glVertex2f (circlePointX, circlePointY);
    for(int i= 0;i<=triangle; i++)
    {
        glVertex2f (
                    circlePointX+(radius*cos(i*trianglePoint/triangle)),
                    circlePointY+(radius*sin(i*trianglePoint/triangle))
                    );
    }
    glEnd ();

    circlePointX=treeBodyX + 0.0125f; circlePointY=  treeBodyY + 0.15f; radius = 0.05f;
    triangle=40;
    trianglePoint =2.0f * PI  ;
    glBegin (GL_TRIANGLE_FAN);
    glColor3ub(leavesRed, leavesGreen, leavesBlue);
    glVertex2f (circlePointX,circlePointY);
    for(int i= 0;i<=triangle; i++)
    {
        glVertex2f (
                    circlePointX+(radius*cos(i*trianglePoint/triangle)),
                    circlePointY+(radius*sin(i*trianglePoint/triangle))
                    );
    }
    glEnd ();

    circlePointX=treeBodyX + 0.0125f; circlePointY=  treeBodyY + 0.05; radius = 0.01f;
    triangle=40;
    trianglePoint =2.0f * PI  ;
    glBegin (GL_TRIANGLE_FAN);
    glColor3ub(243, 156, 18);
    glVertex2f (circlePointX,circlePointY);
    for(int i= 0;i<=triangle; i++)
    {
        glVertex2f (
                    circlePointX+(radius*cos(i*trianglePoint/triangle)),
                    circlePointY+(radius*sin(i*trianglePoint/triangle))
                    );
    }
    glEnd ();

    circlePointX=treeBodyX - 0.09f; circlePointY=  treeBodyY + 0.05f; radius = 0.01f;
    triangle=40;
    trianglePoint =2.0f * PI  ;
    glBegin (GL_TRIANGLE_FAN);
    glColor3ub(243, 156, 18);
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
