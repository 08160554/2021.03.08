#include <GL/glut.h>
void display()
{

    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

     glColor3ub(181,212,148);
     glBegin(GL_TRIANGLES);

                glVertex2f((149-150)/150.0, -(116-150)/150.0);
                glVertex2f((189-150)/150.0, -(116-150)/150.0);
                glVertex2f((176-150)/150.0, -(144-150)/150.0);

    glEnd();

    glutSwapBuffers();
}
int main(int argc, char **argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_DEPTH);
    glutCreateWindow("08160554");

    glutDisplayFunc(display);

    glutMainLoop();
}
