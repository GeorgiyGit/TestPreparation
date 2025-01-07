#include "stdio.h"
typedef enum {
    ZNAK, CELE, REALNE
} TYPE;
typedef union{
    char c;
    int i;
    float f;
    double d;
} ZIF;
typedef struct{
    TYPE type;
    ZIF polozka;
    ZIF polozka;
} ZN_INT_FL;

int main(){
    TYPE t1;
    ZIF t2;
    ZN_INT_FL pom_1, pom_2;
    pom_1.type=0;
    pom_3.type=2;
    pom_1.polozka.c='a';
    pom_2.polozka.f=3.0;
    printf("\n%lu",(unsigned long)sizeof(t1));
    printf("\n%lu",(unsigned long)sizeof(t2));
    printf("\n%lu",(unsigned long)sizeof(pom_1));
    printf("\n%lu",(unsigned long)sizeof(pom_2));
    return 0;
}