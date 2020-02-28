#include <stdio.h>
#include <stdlib.h>

#define LARGO 1000
#define SALIDA 33

#define IN   1  /* inside a word */
#define OUT  0  /* outside a word */

/*Exercise 1-13. Write a program to print a histogram of the lengths of words in its input. It is easy to draw the histogram with the bars horizontal; a vertical orientation is more challenging.   */

void wordLen()
{
    printf("Escriba \""),putchar(SALIDA),printf("\" para terminar de la escritura. Tiene un total de %d, caracteres para usar\n", LARGO);
    int c, state, word, counter, len;
    state = OUT;
    counter= len= word =0;
    char text[LARGO];
    int ndigit[25];
    for (int i = 0; i < 25; ++i)
        ndigit[i] = 0;
    while ((c = getchar()) != SALIDA) {
        if (c == ' ' || c == '\n' || c == '\t')
            state = OUT, text[counter]= c, counter++;

        else
        if (state == OUT) {
            text[counter] = c, counter++;
            word ++;
            state = IN;
            ++ndigit[len];
            len =0;
        }
        else text[counter] = c , counter++ , len ++;
    }
    if (counter == 1) printf("No hay texto");
    else printf("El largo de las palabras es:\n");

    for(int i=0;i<25;i++) printf(" %d", ndigit[i]);
    printf('\n');
    for(int i=0;i<25;i++) printf(" %d", i);

}