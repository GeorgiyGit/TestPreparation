#include "stdio.h"
typedef union clovek{
    char meno[28];
    char priezcisko[20];
    union cloverk* matka;
    union cloverk* otec;
    int pocet_deti;
    union cloverk** deti;
} CLOVEK;

void main(){
    CLOVEK pom;
    printf(" %d ",sizeof(pom));
}