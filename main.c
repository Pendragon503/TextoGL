#include <GL/glut.h>

void display()
{
    glClear(GL_COLOR_BUFFER_BIT);

    // Establecer el color del texto (blanco)
    glColor3f(1.0, 1.0, 1.0);

    // Establecer la posición del texto
    glRasterPos2f(-0.8, 0.0);

    // Mostrar el texto usando la función glutBitmapCharacter
    glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, 'M');
    glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, 'S');
    glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, '1');
    glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, '9');
    glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, '0');
    glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, '3');
    glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, '2');

    glFlush();
}

int main(int argc, char **argv)
{
    glutInit(&argc, argv);
    glutCreateWindow("TextoGL");
    glutDisplayFunc(display);
    glutMainLoop();

    return 0;
}