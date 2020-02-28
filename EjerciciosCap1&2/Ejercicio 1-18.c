#include <stdio.h>
#include <stdlib.h>

#define LARGO 1000
#define SALIDA 33

/*Exercise 1-18. Write a program to remove trailing blanks and tabs from each line of input, and to delete entirely blank lines.*/
void noBlank(){

    int c,len,flag,bk;
    len=flag=bk=0;
    char line[LARGO];
    while ((c=getchar())!=SALIDA){
        char blanks[LARGO];
        if (c!='\n') {
            if (c=='\t'||c==' '){
                flag = 1;
                blanks[bk]=c;
                bk++;
            }
            else
            if (flag==1) {
                flag=0;
                for(int i=0;i<bk;i++){
                    line[len]=blanks[i];
                    len++;
                }
                line[len]=c;
                len++;
                bk=0;
            }
            else{
                line[len] = c;
                ++len;
            }
        }
        else{
            line[len]= c;bk=0;}
    }
    for(int i=0;i<len;i++){
        printf("%c",line[i]);
    }


}

