//hendecagon
#include<math.h>
#include<stdio.h>
#include<GL/glut.h>
#define pi 3.142857
void displayMe(void)
{
	glClear(GL_COLOR_BUFFER_BIT);
	glBegin(GL_POLYGON);
	float x,y,i;
	for(i=0;i<(2*pi);i+=2*pi/11){
	x =0.7 * cos(i);
	y = 0.7 * sin(i);
       
	glVertex2d(x,y);
	}
	glEnd();
	
       
	glFlush();

}
int main(int argc,char** argv){
	glutInit(&argc,argv);
	glutInitDisplayMode(GLUT_SINGLE);
	glutInitWindowSize(1000,700);
	glutCreateWindow("Hendecagon");
        
	glutDisplayFunc(displayMe);
	glutMainLoop();
	return 0;

}
