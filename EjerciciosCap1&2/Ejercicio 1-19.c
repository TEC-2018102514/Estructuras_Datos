#include <stdio.h>
#include <stdlib.h>

#define LARGO 1000
#define SALIDA 33
#define MAXLINE 1000 /* maximum input line length */


/*  Exercise 1-19. Write a function reverse(s) that reverses the character string s. Use it to write a program that reverses its input a line at a time.   */
int reverse(char origin[],int len){
    len = len-1;
    for(int i =0;i<=len;len--){
        printf("%c",origin[len]);
    }
    return 0;

}

void reverser(){
    int c;
    int len=0;
    char line[MAXLINE];
    while ((c=getchar())!=SALIDA){
        if (c!='\n') {
            line[len] = c;
            ++len;}
        else{
            reverse(line,len); printf('\n');len=0;}
    }
}