#include "stdio.h"

int func(unsigned int x, int a){
    if(a<=0 || a>=sizeof(x)*8)
        return x;
    int b=a;
    while(a-->0){
        unsigned int x_b = (x>>++b);
        x=x_b? (x_b | a) : (x & (~((x_b | 1) << a)));
    }
    return x;
}

int main(){
    printf("y = %o\n",1234);
    printf("y = %d\n",func(128,6));
    printf("y = %d\n",func(24,5));
    printf("y = %d\n",func(1234,4));

    return 0;
}
