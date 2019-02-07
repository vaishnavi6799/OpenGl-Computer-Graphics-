//Pakisthan flag
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

//green flag
	glClear(GL_COLOR_BUFFER_BIT);
	
	glColor3f(0.0,0.5,0.0);
	 glBegin(GL_POLYGON);
        glVertex2f(0.0, 0.0);
        glVertex2f(500.0, 0.0);
        glVertex2f(500.0, 500.0);
	glVertex2f(0.0, 500.0);
       
    glEnd();
   //semi moon  
        glBegin(GL_POLYGON);
        glColor3f(1.0,1.0,1.0);
       
	float x,y,i,r;
        int k;
	for(i=2.0;i<(2*pi)-0.5;i+=0.001){
	x =250+100 * cos(i);
	y = 250+100 * sin(i);
	glVertex2i(x,y);
	}
	glEnd();
        glBegin(GL_POLYGON);
        glColor3f(0.0,0.5,0.0);
       
	
	for(i=2.0;i<(2*pi)-0.5;i+=0.001){
	x =273.105+94.8 * cos(i);
	y = 271.555+94.8 * sin(i);
	glVertex2i(x,y);
	}
	glEnd();

//Star
	glColor3f(1.0, 1.0, 1.0);
	glBegin(GL_POLYGON);
         k=0;
	for(i=0;i<2*(pi);i+=2*(pi)/10){
          if(k%2==0){
              r =15;
            }
          else{
              r=25;
           }
           k++;
	x =280+r * cos(i);
	y = 280+r * sin(i);
	glVertex2i(x,y);
	}
	glEnd();

	glFlush();

}

int main(int argc,char** argv){
	glutInit(&argc,argv);
	glutInitDisplayMode(GLUT_SINGLE);
	glutInitWindowSize(1000,700);
	glutCreateWindow("Pakisthan Flag");
        myInit();
	glutDisplayFunc(displayMe);
	glutMainLoop();
	return 0;

}

