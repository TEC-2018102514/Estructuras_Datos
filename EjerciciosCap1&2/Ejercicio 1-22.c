#include <stdio.h>
#include <stdlib.h>

#define LARGO 1000
#define SALIDA 33
#define MAXLINE 1000 /* maximum input line length */

/*Exercise 1-22. Write a program to ``fold'' long input lines into two or more shorter lines after the last
 * non-blank character that occurs before the n-th column of input. Make sure your program does something intelligent
 * with very long lines, and if there are no blanks or tabs before the specified column.*/
void folder(){
    int c,len,words,lenc;
    lenc, words=len=0;
    char line[MAXLINE];
    while ((c=getchar())!=SALIDA) {
        if (10> words || lenc>=100) {
            if (c != ' ') {
                line[len] = c;
                ++lenc;
                ++len;
            } else {
                words++;
                line[len] = c;
                lenc++;
                len++;
            }

        } else {
            line[len] = '\n';
            line[len+1]=c;
            len+=2;
            lenc=0;
            words=0;
        }
    }
    for(int i =0;i<len;i++){
        printf("%c",line[i]);
    }
}