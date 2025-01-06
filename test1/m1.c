#include "stdio.h"
#define nas(x) x*x
static int y=1;
int x;
extern double f;

double fun(void){
    return (nas(x+y)+f);
}