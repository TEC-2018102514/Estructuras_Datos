#include <stdio.h>
#include <stdlib.h>

#define LARGO 1000
#define SALIDA 33
#define MAXLINE 1000 /* maximum input line length */

/*Exercise 1-20. Write a program detab that replaces tabs in the input with the proper number of blanks to space to the next tab stop. Assume a fixed set of tab stops, say every n columns. Should n be a variable or a symbolic parameter?*/

void detab(){
    int c;
    int len=0;
    char line[MAXLINE];
    while ((c=getchar())!=SALIDA){
        if (c!='\t') {
            line[len] = c;
            ++len;}
        else{
            for(int i=0;i<4;i++, len++){
                line[len]=' ';
            }
        }
    }
    for(int i =0;i<len;i++){
        printf("%c",line[i]);
    }
}
