#include "stdio.h"
#include "stdlib.h"

void readFile();
int main(){
    readFile();
    return 0;
}

void readFile(){
    FILE* file = fopen("test.txt","r");
    char c = EOF;

    do{
        c=fgetc(file);
        printf("%c",c);
    } while(c!=EOF);
}