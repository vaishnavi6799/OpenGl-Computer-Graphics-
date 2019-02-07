//Sun
#include<math.h>
#include<stdio.h>
#include<GL/glut.h>
#define pi 3.142857
void myInit (void){
glClearColor(0.0,0.0,0.0,1.0);
glColor3f(1.7,1.0,0.0);
glPointSize(1.0);
glMatrixMode(GL_PROJECTION);
glLoadIdentity();
gluOrtho2D(-780,780,-420,420);


}
void displayMe(void){
	glClear(GL_COLOR_BUFFER_BIT);
	glBegin(GL_POLYGON);
	float x,y,i;
	for(i=0;i<(2*pi);i+=0.001){
	x =200 * cos(i);
	y = 200 * sin(i);
       
	glVertex2i(x,y);
	}
	glEnd();
	
        glBegin(GL_LINES);
        for(i=0;i<2*pi;i+=2*pi/11){
        glVertex2f(210*cos(i),210*sin(i));
        glVertex2f(250*cos(i),250*sin(i));
        }
	glEnd();
	
	
	glFlush();

}

int main(int argc,char** argv){
	glutInit(&argc,argv);
	glutInitDisplayMode(GLUT_SINGLE);
	glutInitWindowSize(1000,700);
	glutCreateWindow("Sun");
        myInit();
	glutDisplayFunc(displayMe);
	glutMainLoop();
	return 0;

}

