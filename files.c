#include "stdio.h"
#include "stdlib.h"

void readFile();
void writeFile();
int main(){
    readFile();
    writeFile();
    return 0;
}

void readFile(){
    FILE* file = fopen("test.txt","r");
    char c = EOF;
    char buffer[20];
    int res = 0;
    do{
        c=fgetc(file);
        if(c==EOF)break;
        printf("%c",c);
    } while(c!=EOF);

    rewind(file);
    printf("\n\n");
    do{
        res=fscanf(file, "%s\n",buffer);
        if(res!=1)break;
        printf("%s\n",buffer);
    } while(res==1);

    printf("\n");
    fseek(file,10,SEEK_SET);
    res=fscanf(file, "%s\n",buffer);
    if(res==1){
        printf("%s\n",buffer);
    }
    fclose(file);
    printf("\n\n");
    /*rename("test.txt","test2.txt");*/
    /*remove("test.txt");*/
}

void writeFile(){
    FILE* fptr = fopen("test.txt","r+");

    fseek(fptr,0,SEEK_END);
    fprintf(fptr,"\ntest\n");
    fputc('t',fptr);
    fclose(fptr);
}