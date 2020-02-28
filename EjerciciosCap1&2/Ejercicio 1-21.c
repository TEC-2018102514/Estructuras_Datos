#include <stdio.h>
#include <stdlib.h>

#define LARGO 1000
#define SALIDA 33
#define MAXLINE 1000 /* maximum input line length */

/*Exercise 1-21. Write a program entab that replaces strings of blanks by the minimum number of tabs and blanks to achieve the same spacing. Use the same tab stops as for detab. When either a tab or a single blank would suffice to reach a tab stop, which should be given preference?*/

void entab(){
    int c,len,blank;
    blank=len=0;
    char line[MAXLINE];
    while ((c=getchar())!=SALIDA){
        if (c!=' ') {
            if (blank>=2){
                for(int i=0;i<=blank;i++,len++) line[len]=' ';
                blank=0;
            }
            line[len] = c;
            ++len;}
        else{
            blank++;
            if (blank==4){
                line[len]='\t';
                blank=0;
                len++;
            }
        }

    }
    for(int i =0;i<len;i++){
        printf("%c",line[i]);
    }

}
