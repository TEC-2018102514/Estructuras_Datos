#include <stdio.h>
#include <stdlib.h>

#define LARGO 1000
#define SALIDA 33
#define MAXLINE 1000 /* maximum input line length */

/*Exercise 1-23. Write a program to remove all comments from a C program. Don't forget to handle quoted strings and character constants properly. C comments don't nest.*/
void commentDelete(){
    int c,len,flag;
    len=flag=0;
    char line[MAXLINE];
    while ((c=getchar())!=SALIDA) {
        if(c==47||c==42) {
            if (flag == 0 && c == 47){flag = 1; }
            else {
                if (flag == 1 && c == 42){flag = 2;}
                else{
                    if (flag == 2 && c == 42)flag = 3;
                    else {
                        if (flag == 3 && c == 47)flag = 0;
                        else;
                    }
                }
            }
        }
        else {
            if (flag == 2) {}
            else {
                if (flag == 1) {
                    line[len] = 47;
                    len++;
                    flag = 0;
                }
                else {
                    if (flag == 3) {
                        line[len] = 42;
                        len++;
                        flag = 2;
                    }
                    line[len] = c;
                    len++;
                }
            }
        }


    }
    for(int i =0;i<len;i++){
        printf("%c",line[i]); }
}
