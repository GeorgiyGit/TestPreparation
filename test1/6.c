#include "stdio.h"
#include "stdlib.h"
#define PCAT
typedef struct {
    unsigned den :5;
    unsigned mesiac :4;
    unsigned rok:7;
} DATUM;

int main(){
    DATUM pom;
    pom.den=22;
    pom.mesiac=5;
    pom.rok=127;
    #ifdef PCAT
        printf("datum: %2d.%2d.%4d\n",pom.den,pom.mesiac,pom.rok+1980);
    #endif
    #undef PCAT
    #ifdef PCAT
        printf("datum: %2d.%2d.%4d\n",pom.den,pom.mesiac,pom.rok+1980);
    #endif
    return 0;
}
0 2 4 8 16 32 64 128

2 - 00
4 - 000
8 - 0000
16 - 00000
32 - 000000
64 - 0000000