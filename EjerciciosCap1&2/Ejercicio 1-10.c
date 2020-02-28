#include <stdio.h>
#include <stdlib.h>

#define LARGO 1000
#define SALIDA EOF


/*  Exercise 1-10. Write a program to copy its input to its output, replacing each tab by \t, each backspace by \b, and each backslash by \\. This makes tabs and backspaces visible in an unambiguous way.   */
void visibleTab(){
    printf("Escriba \""),putchar(SALIDA),printf("\" para terminar de la escritura. Tiene un total de %d, caracteres para usar\n", LARGO);
    int c, counter;
    counter = 0;
    char text[LARGO];
    while ((c = getchar()) != SALIDA && counter<LARGO) {

        text[counter] = c;
        counter++;
    }

    if (counter == 1) printf("No hay texto");
    else {
        printf("El texto encontrado fue:\n") ;
        for(int i =0;i<counter;i++)
            if (text[i] == '\t') putchar('\\'),putchar('t');
            else
            if (text[i] == '\b') putchar('\\'),putchar('b');

            else
            if (text[i] == '\\') putchar('\\'),putchar('\\');

            else putchar(text[i]);}
}
