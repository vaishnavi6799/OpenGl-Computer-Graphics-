//Clock
#include<math.h>
#include<stdio.h>
#include<GL/glut.h>
#define pi 3.142857
void myInit (void){
glMatrixMode(GL_PROJECTION);
glLoadIdentity();
gluOrtho2D(-780,780,-420,420);


}
void displayMe(void){
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(0.5, 0.5, 0.0);
	glBegin(GL_POLYGON);
	
	float x,y,i;
	for(i=0;i<(pi);i+=0.001){
	x =200 * cos(i);
	y = 200 * sin(i);
       
	glVertex2i(x,y);
	}
	glEnd();
	 glBegin(GL_POLYGON);
     //glColor3f( 0.647059f, 0.164706f, 0.164706f);
     glColor3f(0.5f, 0.35f, 0.05f);
        glVertex2f(-200*cos(0), 0.0);
        glVertex2f(200*cos(0), 0.0);
        glVertex2f(0.0, -300);
       
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

