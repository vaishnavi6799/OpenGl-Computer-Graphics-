#include <GL/glut.h>
 
void displayMe(void)
{
    glClear(GL_COLOR_BUFFER_BIT);
//square
    glColor3f(0.5f, 0.5f, 0.5f);
    glBegin(GL_LINES);
        glVertex2f(-0.5, 0.0);
        glVertex2f(0.5, 0.0);
     glEnd();
      glColor3f(0.5f, 0.5f, 0.5f);
     glBegin(GL_LINES);
      
        glVertex2f(0.5, 0.0);
        glVertex2f(0.5, -1.0);
     glEnd();
 glColor3f(0.5f, 0.5f, 0.5f);
     glBegin(GL_LINES);
   
        glVertex2f(0.5, -1.0);
        glVertex2f(-0.5, -1.0);
     glEnd();
 glColor3f(0.5f, 0.5f, 0.5f);
     glBegin(GL_LINES);
        glVertex2f(-0.5, -1.0);
        glVertex2f(-0.5, 0.0);
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
