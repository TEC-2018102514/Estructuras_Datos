#include <stdio.h>
#include <stdlib.h>

#define LARGO 1000
#define SALIDA 33


#define IN   1  /* inside a word */
#define OUT  0  /* outside a word */

/*Exercise 1-11. How would you test the word count program? What kinds of input are most likely to uncover bugs if there are any?
Exercise 1-12. Write a program that prints its input one word per line.*/
void wordCounting()
{
    printf("Escriba \""),putchar(SALIDA),printf("\" para terminar de la escritura. Tiene un total de %d, caracteres para usar\n", LARGO);
    int c, state, counter;
    state = OUT;
    counter= 0;
    char text[LARGO];
    while ((c = getchar()) != SALIDA) {
        if (c == ' ' || c == '\n' || c == '\t')
            state = OUT;
        else
        if (state == OUT) {
            state = IN;
            text[counter] = '\n' ,text[counter+1] = c, counter+=2;}
        else text[counter] = c , counter++;
    }
    if (counter == 1) printf("No hay texto");
    else printf("Las palabras encontradas son:\n");
    for(int i =0;i<counter;i++) putchar(text[i]);
}