# 2021.03.08
==========


WEEK03-1
------------
```C++
#include <stdio.h>
int main(int argc,char **argv)
{
    printf("現在的argc是:%d\n",argc);
    for(int i=0;i<argc;i++)
    {
        printf("argv[%d]是:%s\n",i,argv[i]);
    }
}
```


WEEK03-2
----------
```C++
#include <GL/glut.h>

static void display(void)
{

    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

     glBegin(GL_TRIANGLES);

                glColor3f(1.0f, 0.0f, 0.0f);   glVertex2f(0.0f,   1.0f);
                glColor3f(0.0f, 1.0f, 0.0f);   glVertex2f(0.87f,  -0.5f);
                glColor3f(0.0f, 0.0f, 1.0f);   glVertex2f(-0.87f, -0.5f);

            glEnd();

    glutSwapBuffers();
}
int main(int argc, char *argv[])
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH);
    glutCreateWindow("GLUT Shapes");

    glutDisplayFunc(display);

    glutMainLoop();

```



WEEK03-2
------------

```C++
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
```
