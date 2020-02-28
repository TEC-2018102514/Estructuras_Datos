#include <stdio.h>
#include <stdlib.h>

#define LARGO 1000
#define SALIDA 33

#define MAXLINE 1000 /* maximum input line length */


/*Exercise 1-17. Write a program to print all input lines that are longer than 80 characters. */


int getline1(char s[],int lim)
{
    int c, i;
    for (i=0; i < lim-1 && (c=getchar())!=SALIDA && c!='\n'; ++i)
        s[i] = c;
    if (c == '\n') {
        s[i] = c;
        ++i; }
    s[i] = '\0';
    return i; }
/* copy:  copy 'from' into 'to'; assume to is big enough */

void copy(char to[], char from[])
{
    int i;
    i = 0;
    while ((to[i] = from[i]) != '\0')
        ++i;
}

int more80(){
    int len;
    char line[MAXLINE];
    char longest[MAXLINE];
    char eighty[20][MAXLINE];
    int counter  = 0;
    while ((len = getline1(line, MAXLINE)) > 0)
        if (len >= 80) {
            copy(longest, line);
            counter++;
            for (int i=0;i<=MAXLINE;i++)
                eighty[counter][i] = longest[i];
        }
    for (int i=0;i<=counter;i++)
        printf("%s\n",eighty[i]);
    return 0;


}