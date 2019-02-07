//Clock
#include<math.h>
#include<stdio.h>
#include<GL/glut.h>
#define pi 3.142857
void myInit (void){
glMatrixMode(GL_PROJECTION);
glLoadIdentity();
 glPointSize(3.0);
gluOrtho2D(-780,780,-420,420);


}
void displayMe(void){
	glClear(GL_COLOR_BUFFER_BIT);
	
	glColor3f(0.3,1.0,0.0);
	 glBegin(GL_POLYGON);
     //glColor3f( 0.647059f, 0.164706f, 0.164706f);
    // glColor3f(0.5f, 0.35f, 0.05f);
        glVertex2f(0.0, 0.0);
        glVertex2f(500.0, 0.0);
        glVertex2f(500.0, 100.0);
	glVertex2f(0.0, 100.0);
       
    glEnd();
      glBegin(GL_POLYGON);
      glColor3f(1.0,1.0,1.0);
        glVertex2f(0.0, 100.0);
        glVertex2f(500.0, 100.0);
        glVertex2f(500.0, 200.0);
	glVertex2f(0.0, 200.0);
       
    glEnd();
glBegin(GL_POLYGON);
//glColor3f(0.0f, 0.1f, 0.0f);
glColor3f(1.0,0.5,0.0);
        glVertex2f(0.0, 200.0);
        glVertex2f(500.0, 200.0);
        glVertex2f(500.0, 300.0);
	glVertex2f(0.0, 300.0);
       
    glEnd();
        glBegin(GL_POINTS);
        glColor3f(0.0,0.0,1.0);
       
	float x,y,i;
	for(i=0;i<(2*pi);i+=0.001){
	x =250+50 * cos(i);
	y = 150+50 * sin(i);
	glVertex2i(x,y);
	}
	glEnd();
	 glBegin(GL_LINES);
        for(i=0;i<2*pi;i+=2*pi/24){
        glVertex2f(250,150);
        glVertex2f(250+50*cos(i),150+50*sin(i));
        }
	glEnd();
glBegin(GL_POLYGON);
//glColor3f(0.0f, 0.1f, 0.0f);
glColor3f(0.5,0.35,0.05);
        glVertex2f(0.0, 400.0);
        glVertex2f(-10.0, 400.0);
        glVertex2f(-10.0, -500.0);
	glVertex2f(0.0, -500.0);
       
    glEnd();
	glFlush();

}

int main(int argc,char** argv){
	glutInit(&argc,argv);
	glutInitDisplayMode(GLUT_SINGLE);
	glutInitWindowSize(1000,700);
	glutCreateWindow("Clock");
        myInit();
	glutDisplayFunc(displayMe);
	glutMainLoop();
	return 0;

}

