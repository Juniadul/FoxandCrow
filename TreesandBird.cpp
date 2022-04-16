#include <windows.h>
#include <GL/gl.h>
#include <GL/glu.h>
#include <GL/glut.h>
#include <cstdio>
#include<iostream>
#include<math.h>
#include<MMSystem.h>

# define PI 3.14159265358979323846


void drawQuad(GLint x0, GLint y0, GLint x1, GLint y1, GLint x2, GLint y2, GLint x3, GLint y3)
{ glBegin(GL_QUADS);
  glVertex2f(x0,y0);glVertex2f(x1,y1);glVertex2f(x2,y2);glVertex2f(x3,y3);
  glEnd();
}


void DrawCircle(float x, float y, float r, int triangleAmount) {

    int i;

	GLfloat twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (r * cos(i *  twicePi / triangleAmount)),
			    y + (r * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
	glFlush();
}

void Bird()
{
    glBegin(GL_POLYGON);
    glColor3ub(0,0,0 );

    glVertex2f(-0.5,0.15);
    glVertex2f(-0.3,0.25);
    glVertex2f(-0.1,0.15);
    glVertex2f(-0.3,0.09);

    glEnd();

    //WING ONE

     glBegin(GL_POLYGON);
    glVertex2f(-0.4,0.2);
    glVertex2f(-0.4,0.25);
    glVertex2f(-0.25,0.35);
    glVertex2f(-0.3,0.28);
    glVertex2f(-0.35,0.2);
    glEnd();

    //WING TWO

   glBegin(GL_POLYGON);
    glVertex2f(-0.4,0.20);
    glVertex2f(-0.2,0.31);
    glVertex2f(-0.1,0.22);

    glEnd();

    //LIP

    glBegin(GL_LINES);
    glColor3ub(0,0,0 );
    glVertex2f(-0.55,0.1);
    glVertex2f(-0.49,0.15);
    glVertex2f(-0.55,0.1);
    glVertex2f(-0.48,0.14);
    glVertex2f(-0.48,0.14);
    glVertex2f(-0.5,0.1);
    glVertex2f(-0.5,0.1);
    glVertex2f(-0.45,0.15);
    glEnd();

    //TAIL

    glLineWidth(2);
    glBegin(GL_LINES);
    glVertex2f(-0.15,0.15);
    glVertex2f(-0.08,0.15);
    glEnd();

    //EYE

    glPointSize(25.0);
    glTranslatef(-0.45f,0.18f,0);
    glBegin(GL_POINTS);
    glColor3ub(0,0,0 );
    glVertex2f(-0.0f, -0.0f);
    glEnd();

    glColor3ub(255, 255, 255);
    DrawCircle(-0.009, 0.0f, 0.01f, 20);
    glEnd();
    glFlush();

}


void tree()
{
    glColor3ub(34, 139, 34);
    DrawCircle(0.7f, -0.1f, 0.25f, 20);
    DrawCircle(0.8f, -0.0f, 0.25f, 20);
    DrawCircle(0.64f, 0.12f, 0.25f, 20);
    DrawCircle(0.8f, 0.3f, 0.25f, 20);





    glBegin(GL_POLYGON);
	glColor3ub( 83,53,10. );
	glVertex2f(0.87f, -0.3f);
	glVertex2f(0.85f, 0.0f);
	glVertex2f(1.0f, 0.0f);
	glVertex2f(1.0f,-0.85f);
	glVertex2f(0.85f, -0.85f);
    glEnd();

    glBegin(GL_POLYGON);
	glColor3ub( 83,53,10. );
	glVertex2f(0.87f, -0.3f);
	glVertex2f(0.70f, -0.2f);
	glVertex2f(0.70f, -0.15f);
	glVertex2f(0.8f,-0.17f);
    glVertex2f(0.87f, -0.2f);
    glEnd();

    glBegin(GL_POLYGON);
	glColor3ub( 83,53,10. );
	glVertex2f(0.70f, -0.2f);
	glVertex2f(0.70f, -0.15f);
	glVertex2f(0.50f, -0.17f);
	glVertex2f(0.50f,-0.2f);
    glEnd();

    glBegin(GL_POLYGON);
	glColor3ub( 83,53,10. );
	glVertex2f(0.9f, -0.03f);
	glVertex2f(0.60f, 0.05f);
	glVertex2f(0.64f, 0.09f);
	glVertex2f(0.9f, 0.05f);
	glVertex2f(0.95f, -0.03f);
    glEnd();

     glBegin(GL_POLYGON);
	glColor3ub( 83,53,10. );
	glVertex2f(0.75f, 0.07f);
	glVertex2f(0.70f, 0.13f);
	glVertex2f(0.58f, 0.20f);
	glVertex2f(0.65f, 0.17f);
	glVertex2f(0.79f, 0.09f);
	glVertex2f(0.85f, 0.0f);
    glEnd();

     glBegin(GL_POLYGON);
	glColor3ub( 83,53,10. );
	glVertex2f(.95f,0.0f);
	glVertex2f(.92f,0.0f);
	glVertex2f(.85f,0.29f);
	glVertex2f(.90f,0.27f);
	glVertex2f(.91f,0.24f);
	glVertex2f(.99f,0.0f);


	 glBegin(GL_POLYGON);
	glColor3ub( 83,53,10. );
	glVertex2f(.96f,0.2f);
	glVertex2f(.97f,0.25f);
	glVertex2f(.99f,0.30f);
	glVertex2f(.96f,0.27f);
	glVertex2f(.97f,0.24f);
	glVertex2f(.96f,0.25f);
    glEnd();
}

void Normal_Tree()
{
    glBegin(GL_POLYGON);
	glColor3ub( 83,53,10);
	glVertex2f(-0.62f, -0.24f);
	glVertex2f(-0.58f, -0.24f);
	glVertex2f(-0.58f,-0.8f);
	glVertex2f(-0.62f, -0.8f);
    glEnd();

    glColor3ub(34, 139, 34);
    DrawCircle(0.67f, -0.11f, 0.15f, 20);
    DrawCircle(-0.7f, 0.1f, 0.15f, 20);
    DrawCircle(-0.59f, 0.23f, 0.15f, 20);
    DrawCircle(-0.5f, 0.05f, 0.18f, 20);
    DrawCircle(-0.53f, -0.12f, 0.15f, 20);



}
void display(){

    tree();
    Normal_Tree();
    Bird();


    glFlush();

    glutSwapBuffers();
    }



void myInit(void){
    glClearColor(1.0f,1.0f,1.0f,1.0f);
    glColor3f(.0f,.0f,.0f);
    glLoadIdentity();
    gluOrtho2D(-2, 2, -2, 2);
}
int main(int argc, char** argv)
{

    glutInit(&argc, argv);
    glutInitWindowSize(1920,1080);
    glutCreateWindow("FOX AND CROW");
    //glutPostRedisplay();
    glutDisplayFunc(display);
    //glutKeyboardFunc(mykeyboard);
    myInit();
    //glutTimerFunc(30, update2, 0);
    glutMainLoop();
    return 0;
}


