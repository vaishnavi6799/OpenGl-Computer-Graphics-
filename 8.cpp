#include <GL/glut.h>
#include <stdio.h>

int x1, y1, x2, y2;

void myInit() {
	glClear(GL_COLOR_BUFFER_BIT);
	glClearColor(0.0, 0.0, 0.0, 1.0);
	glMatrixMode(GL_PROJECTION);
	gluOrtho2D(0, 500, 0, 500);
}



void draw_line(int x1, int x2, int y1, int y2) {
	int dx, dy, i, p;
	int ix, iy, inc1, inc2;
	int x,y;

	dx = x2-x1;
	dy = y2-y1;

	if (dx < 0) dx = -dx;
	if (dy < 0) dy = -dy;
	ix = 1;
	if (x2 < x1) ix = -1;
	iy = 1;
	if (y2 < y1) iy = -1;
	x = x1; y = y1;
	if (dx > dy) {			//slope<1
		glBegin(GL_POINTS);
		glVertex2i(x, y);
		glEnd();
		p = 2 * dy-dx;//decision parameter
		inc1 = 2*(dy-dx);  //p(k+1) = p(k) + 2*(dy-dx) if p>0
		inc2 = 2*dy;       //p(k+1) = p(k) +2*(dy)  if p<0
		for (i=0; i<dx; i++) {
			if (p >= 0) {
				y += iy;    //plot (xk,yk+1)
				p += inc1;
			}
			else
				p += inc2;    // plot (xk+1,yk)
			
                        x += ix;
			glBegin(GL_POINTS);
			glVertex2i(x, y);
			glEnd();
		}

	} else {		//slope>1
		glBegin(GL_POINTS);
		glVertex2i(x, y);
		glEnd();
		p = 2*dx-dy; //decision parameter
		inc1 = 2*(dx-dy);
		inc2 = 2*dx;
		for (i=0; i<dy; i++) {
			if (p >= 0) {
				x += ix;
				p += inc1;
			}
			else
				p += inc2;
			y += iy;
			glBegin(GL_POINTS);
			glVertex2i(x, y);
			glEnd();
		}
	}
}

void myDisplay() {
	draw_line(x1, x2, y1, y2);
	glFlush();
}

int main(int argc, char **argv) {

	printf( "Enter (x1, y1, x2, y2)\n");
	scanf("%d %d %d %d", &x1, &y1, &x2, &y2);

	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
	glutInitWindowSize(500, 500);
	glutInitWindowPosition(0, 0);
	glutCreateWindow("Bresenham's Line Drawing");
	myInit();
	glutDisplayFunc(myDisplay);
	glutMainLoop();
return 0;
}


