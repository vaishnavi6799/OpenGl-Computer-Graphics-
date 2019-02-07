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

//filled square
 glBegin(GL_POLYGON);
        glVertex2f(-0.2, 0.2);
        glVertex2f(-0.2, 0.6);
	glVertex2f(0.2, 0.6);
	glVertex2f(0.2, 0.2);
     glEnd();
glFlush();
}
int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE);
    glutInitWindowSize(600, 500);
    glutInitWindowPosition(100, 100);
    glutCreateWindow("Square");
    glutDisplayFunc(displayMe);
    glutMainLoop();
    return 0;
}
