#include <GL/glut.h>
#include<math.h>
#include<stdio.h>
#define pi 3.142857
void displayMe(void)
{
    glClear(GL_COLOR_BUFFER_BIT);
   //glClearColor(0.1,0.5,0.2);
   //glClearColor( GLclampf red, GLclampf green, GLclampf blue, GLclampf alpha );
  glBegin(GL_POLYGON);
     glColor3f(0.2, 0.2, 0.5);
        glVertex2f(2.0, -1.0);
        glVertex2f(2.0, 1.0);
        glVertex2f(-2.0, 1.0);
        glVertex2f(-2.0, -1.0);
    glEnd();
//square
    glColor3f(0.4f, 0.5f, 0.5f);
    glBegin(GL_POLYGON);
        glVertex2f(-0.5, 0.0);
        glVertex2f(0.5, 0.0);
        glVertex2f(0.5, -1.0);
        glVertex2f(-0.5, -1.0);
        
     glEnd();
//triangle
//       glColor3f(0.1f, 0.1f, 0.0f);
     
     glBegin(GL_POLYGON);
     //glColor3f( 0.647059f, 0.164706f, 0.164706f);
     glColor3f(0.5f, 0.35f, 0.05f);
        glVertex2f(-0.5, 0.0);
        glVertex2f(0.5, 0.0);
        glVertex2f(0.0, 0.5);
       
    glEnd();
//rectangle
   
     
     glBegin(GL_POLYGON);
     glColor3f(1.0f, 1.0f, 0.0f);
        glVertex2f(-0.1, -1.0);
        glVertex2f(0.1, -1.0);
        glVertex2f(0.1, -0.7);
        glVertex2f(-0.1, -0.7);
       
    glEnd();
   

//Windows
     glBegin(GL_POLYGON);
     glColor3f(1.0f, 1.0f, 0.0f);
        glVertex2f(-0.4, -0.2);
        glVertex2f(-0.2, -0.2);
        glVertex2f(-0.2, -0.4);
        glVertex2f(-0.4, -0.4);
     
    glEnd();
   
     glBegin(GL_POLYGON);
     glColor3f(1.0f, 1.0f, 0.0f);
        glVertex2f(0.4, -0.2);
        glVertex2f(0.2, -0.2);
        glVertex2f(0.2, -0.4);
        glVertex2f(0.4, -0.4);
     
    glEnd();
//lines in window
     glColor3f(0.5f, 0.35f, 0.05f);
       glBegin(GL_LINES);
        glVertex2f(-0.35, -0.2);
        glVertex2f(-0.35, -0.4);
     glEnd();
      glColor3f(0.5f, 0.35f, 0.05f);
       glBegin(GL_LINES);
        glVertex2f(-0.25, -0.2);
        glVertex2f(-0.25, -0.4);
     glEnd();
        glColor3f(0.5f, 0.35f, 0.05f);
       glBegin(GL_LINES);
        glVertex2f(-0.4, -0.25);
        glVertex2f(-0.2, -0.25);
     glEnd();
        glColor3f(0.5f, 0.35f, 0.05f);
       glBegin(GL_LINES);
        glVertex2f(-0.4, -0.35);
        glVertex2f(-0.2, -0.35);
     glEnd();


glColor3f(0.5f, 0.35f, 0.05f);
       glBegin(GL_LINES);
        glVertex2f(0.35, -0.2);
        glVertex2f(0.35, -0.4);
     glEnd();
      glColor3f(0.5f, 0.35f, 0.05f);
       glBegin(GL_LINES);
        glVertex2f(0.25, -0.2);
        glVertex2f(0.25, -0.4);
     glEnd();
        glColor3f(0.5f, 0.35f, 0.05f);
       glBegin(GL_LINES);
        glVertex2f(0.4, -0.25);
        glVertex2f(0.2, -0.25);
     glEnd();
        glColor3f(0.5f, 0.35f, 0.05f);
       glBegin(GL_LINES);
        glVertex2f(0.4, -0.35);
        glVertex2f(0.2, -0.35);
     glEnd();

  glBegin(GL_POLYGON);
     glColor3f(0.5f, 0.35f, 0.05f);
        glVertex2f(-0.1, -1.0);
        glVertex2f(-0.1, -0.7);
        glVertex2f(-0.02, -0.75);
        glVertex2f(-0.02, -0.95);
     
    glEnd();
//sun
      glBegin(GL_POLYGON);
      glColor3f(1.0,1.0,0.0);
	float x,y,i;
	for(i=0;i<(2*pi);i+=0.001){
         
	x =0.5+0.2 * cos(i);
	y =0.5+0.2 * sin(i);
      
	glVertex2f(x,y);
	}
        
	glEnd();
	/*
        glBegin(GL_LINES);
        glColor3f(1.7,1.0,0.0);
        for(i=0;i<2*pi;i+=2*pi/11){
        glVertex2f(0.5+0.21*cos(i),0.5+0.21*sin(i));
        glVertex2f(0.5+0.25*cos(i),0.5+0.25*sin(i));
        }
	glEnd();*/

//snow
 glBegin(GL_POLYGON);
      glColor3f(0.8,0.8,0.9);
        glVertex2f(-2.0, -1.0);
        glVertex2f(-0.5, -1.0);
        glVertex2f(-0.5, -0.7);
        glVertex2f(-2.0, -0.7);
       
    glEnd();
 glBegin(GL_POLYGON);
       glColor3f(0.8,0.8,0.9);
        glVertex2f(2.0, -1.0);
        glVertex2f(0.5, -1.0);
        glVertex2f(0.5, -0.7);
        glVertex2f(2.0, -0.7);
       
    glEnd();
 glBegin(GL_POLYGON);
      glColor3f(0.8,0.8,0.9);
	
	for(i=0;i<(2*pi);i+=0.001){
         
	x =-0.9+0.1 * cos(i);
	y =-0.75+0.1 * sin(i);
       
	glVertex2f(x,y);
	}
        
	glEnd();
glBegin(GL_POLYGON);
      glColor3f(0.8,0.8,0.9);
	
	for(i=0;i<(2*pi);i+=0.001){
         
	x =-0.75+0.1 * cos(i);
	y =-0.75+0.1 * sin(i);
       
	glVertex2f(x,y);
	}
        
	glEnd();
glBegin(GL_POLYGON);
      glColor3f(0.8,0.8,0.9);
	
	for(i=0;i<(2*pi);i+=0.001){
         
	x =-0.63+0.1 * cos(i);
	y =-0.75+0.1 * sin(i);
       
	glVertex2f(x,y);
	}
	glEnd();
glBegin(GL_POLYGON);
      glColor3f(0.8,0.8,0.9);
	
	for(i=0;i<(2*pi);i+=0.001){
         
	x =0.9+0.07 * cos(i);
	y =-0.7+0.07 * sin(i);
       
	glVertex2f(x,y);
	}
        
	glEnd();
glBegin(GL_POLYGON);
      glColor3f(0.8,0.8,0.9);
	
	for(i=0;i<(2*pi);i+=0.001){
         
	x =0.65+0.1 * cos(i);
	y =-0.75+0.1 * sin(i);
       
	glVertex2f(x,y);
	}
	glEnd();
glBegin(GL_POLYGON);
      glColor3f(0.8,0.8,0.9);
	
	for(i=0;i<(2*pi);i+=0.001){
         
	x =0.58+0.08 * cos(i);
	y =-0.75+0.08 * sin(i);
       
	glVertex2f(x,y);
	}
        
	glEnd();
//Car
   glBegin(GL_POLYGON);
      glColor3f(0.5f, 0.35f, 0.05f);
        glVertex2f(0.6, -0.3);
        glVertex2f(0.8, -0.3);
        glVertex2f(0.85, -0.4);
        glVertex2f(0.85, -0.6);
         glVertex2f(0.55, -0.6);
          glVertex2f(0.55, -0.4);
    glEnd();
glBegin(GL_POLYGON);
      glColor3f(1.0f, 1.0f, 1.0f);
        glVertex2f(0.65, -0.35);
        glVertex2f(0.75, -0.35);
        glVertex2f(0.77, -0.4);
        glVertex2f(0.63, -0.4);
    glEnd();
glBegin(GL_POLYGON);
      glColor3f(1.0f, 1.0f, 1.0f);
        glVertex2f(0.62, -0.45);
        glVertex2f(0.78, -0.45);
        glVertex2f(0.78, -0.55);
        glVertex2f(0.62, -0.55);
    glEnd();
//Wheel1    
  glBegin(GL_POLYGON);
      glColor3f(1.0,1.0,1.0);
	
	for(i=0;i<(2*pi);i+=0.001){
         
	x =0.62+0.05 * cos(i);
	y =-0.65+0.05 * sin(i);
       
	glVertex2f(x,y);
	}
        
	glEnd();
//Wheel2
     glBegin(GL_POLYGON);
      glColor3f(1.0,1.0,1.0);
	
	for(i=0;i<(2*pi);i+=0.001){
         
	x =0.78+0.05 * cos(i);
	y =-0.65+0.05 * sin(i);
       
	glVertex2f(x,y);
	}
        
	glEnd();

//Cloud
glBegin(GL_POLYGON);
      glColor3f(0.7,0.6,0.9);
	//float x,y,i;
	for(i=0;i<(2*pi);i+=0.001){
         
	x =-0.8+0.2 * cos(i);
	y =0.5+0.15 * sin(i);
       
	glVertex2f(x,y);
	}
        
	glEnd();
glBegin(GL_POLYGON);
      glColor3f(0.7,0.6,0.9);
	//float x,y,i;
	for(i=0;i<(2*pi);i+=0.001){
         
	x =-0.6+0.1 * cos(i);
	y =0.55+0.1 * sin(i);
       
	glVertex2f(x,y);
	}
        
	glEnd();
glBegin(GL_POLYGON);
      glColor3f(0.7,0.6,0.9);
	//float x,y,i;
	for(i=0;i<(2*pi);i+=0.001){
         
	x =-0.47+0.17 * cos(i);
	y =0.43+0.1 * sin(i);
       
	glVertex2f(x,y);
	}
        
	glEnd();
//cloud2
glBegin(GL_POLYGON);
     glColor3f(0.7,0.6,0.9);
	//float x,y,i;
	for(i=0;i<(2*pi);i+=0.001){
         
	x =0.6+0.2 * cos(i);
	y =0.4+0.15 * sin(i);
       
	glVertex2f(x,y);
	}
        
	glEnd();
glBegin(GL_POLYGON);
      glColor3f(0.7,0.6,0.9);
	//float x,y,i;
	for(i=0;i<(2*pi);i+=0.001){
         
	x =0.8+0.1 * cos(i);
	y =0.4+0.1 * sin(i);
       
	glVertex2f(x,y);
	}
        
	glEnd();
glBegin(GL_POLYGON);
       glColor3f(0.7,0.6,0.9);
	//float x,y,i;
	for(i=0;i<(2*pi);i+=0.001){
         
	x =-0.3+0.2 * cos(i);
	y =0.8+0.15 * sin(i);
       
	glVertex2f(x,y);
	}
        
	glEnd();
//cloud3
glBegin(GL_POLYGON);
       glColor3f(0.7,0.6,0.9);
	//float x,y,i;
	for(i=0;i<(2*pi);i+=0.001){
         
	x =-0.1+0.1 * cos(i);
	y =0.8+0.1 * sin(i);
       
	glVertex2f(x,y);
	}
	glEnd();
glBegin(GL_POLYGON);
       glColor3f(0.7,0.6,0.9);
	//float x,y,i;
	for(i=0;i<(2*pi);i+=0.001){
         
	x =-0.2+0.1 * cos(i);
	y =0.9+0.1 * sin(i);
       
	glVertex2f(x,y);
	}
	glEnd();
//cloud4
glBegin(GL_POLYGON);
      glColor3f(0.7,0.6,0.9);
	//float x,y,i;
	for(i=0;i<(2*pi);i+=0.001){
         
	x =0.7+0.2 * cos(i);
	y =0.74+0.15 * sin(i);
       
	glVertex2f(x,y);
	}
        
	glEnd();
glBegin(GL_POLYGON);
      glColor3f(0.7,0.6,0.9);
	//float x,y,i;
	for(i=0;i<(2*pi);i+=0.001){
         
	x =0.5+0.1 * cos(i);
	y =0.79+0.1 * sin(i);
       
	glVertex2f(x,y);
	}
        
	glEnd();
glBegin(GL_POLYGON);
      glColor3f(0.7,0.6,0.9);
	//float x,y,i;
	for(i=0;i<(2*pi);i+=0.001){
         
	x =0.37+0.17 * cos(i);
	y =0.67+0.1 * sin(i);
       
	glVertex2f(x,y);
	}
        
	glEnd();
	
//Wood
glBegin(GL_POLYGON);
       glColor3f(0.5f, 0.35f, 0.05f);
        glVertex2f(-0.8, -0.5);
        glVertex2f(-0.9, -0.8);
        glVertex2f(-0.87, -0.82);
        glVertex2f(-0.79, -0.55);
        glVertex2f(-0.79, -0.86);
        glVertex2f(-0.76, -0.86);
        glVertex2f(-0.76, -0.55);
        glVertex2f(-0.7, -0.8);
       glVertex2f(-0.67, -0.75);
       glVertex2f(-0.75, -0.5);
    glEnd();
//Fire


glBegin(GL_POLYGON);
       glColor3f(1.0,0.0,0.0);
        glVertex2f(-0.8, -0.6);
   glColor3f(1.0,1.0,0.0);
        glVertex2f(-0.85, -0.55);
 glColor3f(1.0,0.5,0.0);
        glVertex2f(-0.9, -0.5);
  glColor3f(1.0,1.0,0.0);
        glVertex2f(-0.85, -0.37);
 glColor3f(1.0,0.5,0.0);
        glVertex2f(-0.87, -0.43);
  glColor3f(1.0,1.0,0.0);
        glVertex2f(-0.86, -0.42);
 glColor3f(1.0,0.0,0.0);
        glVertex2f(-0.8, -0.36);
  glColor3f(1.0,1.0,0.0);
        glVertex2f(-0.78, -0.37);
 glColor3f(1.0,0.5,0.0);
        glVertex2f(-0.76, -0.46);
  glColor3f(1.0,1.0,0.0);
       glVertex2f(-0.77, -0.43);
 glColor3f(1.0,0.0,0.0);
        glVertex2f(-0.74, -0.37);
  glColor3f(1.0,1.0,0.0);
        glVertex2f(-0.72, -0.41);
glColor3f(1.0,0.5,0.0);
       glVertex2f(-0.7, -0.43);
  glColor3f(1.0,1.0,0.0);
        glVertex2f(-0.68, -0.46);
 glColor3f(1.0,0.5,0.0);
        glVertex2f(-0.67, -0.48);
  glColor3f(1.0,1.0,0.0);
       glVertex2f(-0.69, -0.43);
 glColor3f(1.0,0.5,0.0);
       glVertex2f(-0.7, -0.6);
    glEnd();
    glFlush();


}
 
int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE);
    glutInitWindowSize(600, 500);
    glutInitWindowPosition(100, 100);
    glutCreateWindow("My Home");
    glutDisplayFunc(displayMe);
    glutMainLoop();
    return 0;
}
