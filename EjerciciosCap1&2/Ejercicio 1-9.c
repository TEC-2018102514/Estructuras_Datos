#include <stdio.h>
#include <stdlib.h>

#define LARGO 100
#define SALIDA EOF

/*  Exercise 1-9. Write a program to copy its input to its output, replacing each string of one or more blanks by a single blank.   */
void repeater(){
    printf("Escriba \""),putchar(SALIDA),printf("\" para terminar de la escritura. Tiene un total de %d, caracteres para usar\n", LARGO);
    int c, blank, counter;
    blank =0, counter = 0;
    char text[LARGO];

    while ((c = getchar()) != SALIDA && counter<=LARGO) {
        if (c == ' ')
            if (blank == 0) blank = 1, text[counter] = c, counter++;
            else;
        else
            blank = 0,
                    text[counter] = c,
                    counter++;
    }
    if (counter == 1) printf("No hay texto");
    else printf("El texto encontrado fue:\n");
    for(int i =0;i<counter;i++) putchar(text[i]);

}