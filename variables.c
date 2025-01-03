#include "stdio.h"
#include "stdlib.h"

void all_sizes();
int main(){
    all_sizes();
}

void all_sizes(){
    int n = 0;
    float fl = 0.0;
    double d = 0.0;
    long l = 0;
    long long ll = 0;
    long long int lln = 0;
    long int ln = 0;

    printf("int - %d\n",n);
    printf("float - %f\n",fl);
    printf("double - %lf\n",fl);
    printf("long - %ld\n",l);
    printf("long long- %lld\n",ll);
    printf("long long int - %lld\n",lln);
    printf("long int - %ld\n\n",ln);

    printf("sizeof(int) - %ld\n",sizeof(n));
    printf("sizeof(float) - %ld\n",sizeof(fl));
    printf("sizeof(double) - %ld\n",sizeof(d));
    printf("sizeof(long) - %ld\n",sizeof(l));
    printf("sizeof(long long) - %ld\n",sizeof(ll));
    printf("sizeof(long long int) - %ld\n",sizeof(lln));
    printf("sizeof(long int) - %ld\n\n",sizeof(ln));
}