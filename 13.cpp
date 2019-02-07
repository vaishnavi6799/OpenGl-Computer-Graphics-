//Rainy
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
     glColor3f(0.3, 0.2, 0.5);
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
//Grass
 glBegin(GL_POLYGON);
      glColor3f(0.0, 0.6, 0.0);
        glVertex2f(-2.0, -1.0);
        glVertex2f(-0.5, -1.0);
        glVertex2f(-0.5, -0.7);
        glVertex2f(-2.0, -0.7);
       
    glEnd();
 glBegin(GL_POLYGON);
      glColor3f(0.0, 0.6, 0.0);
        glVertex2f(2.0, -1.0);
        glVertex2f(0.5, -1.0);
        glVertex2f(0.5, -0.7);
        glVertex2f(2.0, -0.7);
       
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
	float x,y,i;
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
//Rain drops
  glColor3f(1.0f, 1.0f, 1.0f);
       glBegin(GL_LINES);
        glVertex2f(-0.75, -0.4);
        glVertex2f(-0.7, -0.55);
        
     glEnd();
      glBegin(GL_LINES);
         glVertex2f(-0.65, -0.4);
        glVertex2f(-0.6, -0.55);
       
     glEnd();
      glBegin(GL_LINES);
        glVertex2f(-0.85, -0.4);
        glVertex2f(-0.8, -0.55);
     glEnd();
       glBegin(GL_LINES);
        glVertex2f(-0.77, -0.1);
        glVertex2f(-0.72, -0.22);
     glEnd();
     glBegin(GL_LINES);
        glVertex2f(-0.65, -0.1);
        glVertex2f(-0.63, -0.22);
     glEnd();
      glBegin(GL_LINES);
        glVertex2f(-0.85, -0.1);
        glVertex2f(-0.83, -0.22);
     glEnd();
      glBegin(GL_LINES);
        glVertex2f(-0.75, 0.2);
        glVertex2f(-0.7, 0.08);
     glEnd();
        glBegin(GL_LINES);
        glVertex2f(-0.55, 0.2);
        glVertex2f(-0.5, 0.08);
     glEnd();
      glBegin(GL_LINES);
        glVertex2f(-0.85, 0.2);
        glVertex2f(-0.8, 0.08);
     glEnd();
 glBegin(GL_LINES);
        glVertex2f(-0.15, 0.2);
        glVertex2f(-0.1, 0.08);
     glEnd();
  glBegin(GL_LINES);
        glVertex2f(-0.35, 0.2);
        glVertex2f(-0.3, 0.08);
     glEnd();
    glBegin(GL_LINES);
        glVertex2f(0.7, 0.2);
        glVertex2f(0.75, 0.08);
     glEnd();
  glBegin(GL_LINES);
        glVertex2f(0.3, 0.2);
        glVertex2f(0.35, 0.08);
     glEnd();
    glBegin(GL_LINES);
        glVertex2f(0.1, 0.2);
        glVertex2f(0.15, 0.08);
     glEnd();
     glBegin(GL_LINES);
        glVertex2f(0.5, 0.2);
        glVertex2f(0.55, 0.08);
     glEnd();
      glBegin(GL_LINES);
        glVertex2f(0.72, -0.1);
        glVertex2f(0.77, -0.22);
     glEnd();
     glBegin(GL_LINES);
        glVertex2f(0.63, -0.1);
        glVertex2f(0.65, -0.22);
     glEnd();
      glBegin(GL_LINES);
        glVertex2f(0.83, -0.1);
        glVertex2f(0.85, -0.22);
     glEnd();
      glBegin(GL_LINES);
        glVertex2f(0.83, -0.1);
        glVertex2f(0.85, -0.22);
     glEnd();
       glBegin(GL_LINES);
        glVertex2f(-0.35, 0.5);
        glVertex2f(-0.3, 0.35);
     glEnd();
         glBegin(GL_LINES);
        glVertex2f(-0.55, 0.5);
        glVertex2f(-0.5, 0.35);
     glEnd();
        glBegin(GL_LINES);
        glVertex2f(0.5, 0.5);
        glVertex2f(0.55, 0.35);
     glEnd();
 glBegin(GL_LINES);
        glVertex2f(0.3, 0.5);
        glVertex2f(0.35, 0.35);
     glEnd();
    glBegin(GL_LINES);
        glVertex2f(0.4, 0.5);
        glVertex2f(0.45, 0.35);
     glEnd();
      glBegin(GL_LINES);
        glVertex2f(0.6, 0.5);
        glVertex2f(0.65, 0.35);
     glEnd();
      glBegin(GL_LINES);
        glVertex2f(0.1, 0.5);
        glVertex2f(0.15, 0.35);
     glEnd();
      glBegin(GL_LINES);
        glVertex2f(-0.25, 0.5);
        glVertex2f(-0.2, 0.35);
     glEnd();
       glBegin(GL_LINES);
        glVertex2f(-0.45, 0.5);
        glVertex2f(-0.4, 0.35);
     glEnd();
       glBegin(GL_LINES);
        glVertex2f(-0.15, 0.5);
        glVertex2f(-0.1, 0.35);
     glEnd();
      glBegin(GL_LINES);
        glVertex2f(-0.05, 0.5);
        glVertex2f(-0.0, 0.35);
     glEnd();
     glBegin(GL_LINES);
        glVertex2f(-0.15, 0.8);
        glVertex2f(-0.1, 0.65);
     glEnd();
       glBegin(GL_LINES);
        glVertex2f(0.1, 0.8);
        glVertex2f(0.15, 0.65);
     glEnd();
       glBegin(GL_LINES);
        glVertex2f(-0.25, 0.8);
        glVertex2f(-0.2, 0.65);
     glEnd();
//human
glBegin(GL_POLYGON);
      glColor3f(0.6,0.6,0.6);
	//float x,y,i;
	for(i=0;i<(2*pi);i+=0.001){
         
	x =-0.7+0.08 * cos(i);
	y =-0.35+0.08 * sin(i);
       
	glVertex2f(x,y);
	}
	glEnd();
//body
    glBegin(GL_POLYGON);
      glColor3f(0.6,0.6,0.6);
        glVertex2f(-0.76, -0.43);
        glVertex2f(-0.64, -0.43);
        glVertex2f(-0.64, -0.67);
        glVertex2f(-0.76, -0.67);
    glEnd();
//legs
    glBegin(GL_POLYGON);
      glColor3f(0.6,0.6,0.6);
        glVertex2f(-0.74, -0.67);
        glVertex2f(-0.72, -0.67);
        glVertex2f(-0.72, -0.77);
        glVertex2f(-0.74, -0.77);
    glEnd();

     glBegin(GL_POLYGON);
      glColor3f(0.6,0.6,0.6);
        glVertex2f(-0.66, -0.67);
        glVertex2f(-0.68, -0.67);
        glVertex2f(-0.68, -0.77);
        glVertex2f(-0.66, -0.77);
    glEnd();
//hands
     glBegin(GL_POLYGON);
      glColor3f(0.6,0.6,0.6);
        glVertex2f(-0.64, -0.45);
        glVertex2f(-0.6, -0.58);
        glVertex2f(-0.6, -0.62);
        glVertex2f(-0.64, -0.49);
    glEnd();
    glBegin(GL_POLYGON);
      glColor3f(0.6,0.6,0.6);
        glVertex2f(-0.76, -0.45);
        glVertex2f(-0.8, -0.58);
        glVertex2f(-0.8, -0.62);
        glVertex2f(-0.76, -0.49);
    glEnd();
//eyes
glPointSize(5.0);
    glBegin(GL_POINTS);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(-0.74, -0.32);
    glVertex2f(-0.68, -0.32);
     glVertex2f(-0.71, -0.36);
    glEnd();
    glBegin(GL_LINES);
         glVertex2f(-0.74, -0.39);
        glVertex2f(-0.68, -0.39);
       
     glEnd();
//Umbrella
 glBegin(GL_POLYGON);
      glColor3f(0.2,0.1,0.2);
	//float x,y,i;
	for(i=0;i<(pi);i+=0.001){
         
	x =-0.8+0.2 * cos(i);
	y =-0.22+0.17 * sin(i);
       
	glVertex2f(x,y);
	}
	glEnd();
 glBegin(GL_POLYGON);
      glColor3f(0.5f, 0.35f, 0.05f);
        glVertex2f(-0.79, -0.63);
        glVertex2f(-0.8, -0.63);
        glVertex2f(-0.8, -0.22);
        glVertex2f(-0.79, -0.22);
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
