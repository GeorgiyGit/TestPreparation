#include "stdio.h"
#define mak1(x) x*x
#define mak2(x) mak1(x)+mak1(x)

int main(){
    printf("%d",mak2(3));
}