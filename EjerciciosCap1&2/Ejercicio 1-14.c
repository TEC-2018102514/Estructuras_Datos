#include <stdio.h>
#include <stdlib.h>

#define LARGO 100
#define SALIDA EOF

/* Exercise 1-14. Write a program to print a histogram of the frequencies of different characters in its input.*/

void charCount()
{
    int c, i;
    int nchar[26];
    for (i = 0; i < 26; ++i)
        nchar[i] = 0;
    while ((c = getchar()) != SALIDA) {
        if ((c >= 65 && c <= 90)||(c >= 97 && c <= 122) ) {
            if (c >= 97 && c <= 122) c = c - 32;
            int pos = c;
            pos = c-65;
            ++nchar[pos];
        }
    }
    printf("digits =");
    for (i = 0; i < 26; ++i)
        printf(" %d", nchar[i]);

}
