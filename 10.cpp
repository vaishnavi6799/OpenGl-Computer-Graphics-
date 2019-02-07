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
int i,k,j;
        k=50;
	glClear(GL_COLOR_BUFFER_BIT);


   for(j=1;j<9;j++){

	for(i=1;i<9;i++){
		 if(i%2==0){
                if(j%2==0){
		glColor3f(0.3,0.3,0.3);
                }
                 else{
                   glColor3f(1.0,1.0,1.0);
                  }
		 glBegin(GL_POLYGON);
		glVertex2f(k*(i-1),k*(j-1));
		glVertex2f(k*i,k*(j-1));
		glVertex2f(k*i, k*j);
		glVertex2f(k*(i-1),k*j);
		glEnd();
		 }
		 else{
		   if(j%2==0){glColor3f(1.0,1.0,1.0);
		
                }
                 else{
                  glColor3f(0.3,0.3,0.3);
                  }
		 glBegin(GL_POLYGON);
		 glVertex2f(k*(i-1),k*(j-1));
		glVertex2f(k*i,k*(j-1));
		glVertex2f(k*i, k*j);
		glVertex2f(k*(i-1),k*j);
		 glEnd();
		 }
      }
  }
    
    glFlush();

}

int main(int argc,char** argv){
	glutInit(&argc,argv);
	glutInitDisplayMode(GLUT_SINGLE);
	glutInitWindowSize(1000,800);
	glutCreateWindow("Chess Board");
        myInit();
	glutDisplayFunc(displayMe);
	glutMainLoop();
	return 0;

}

