#include "stdio.h"
#include <stdarg.h>
#define N 7

int sum(int count, ...) {
    int sum = 0;
    int num = 0;
    va_list args;
    
    va_start(args, count);
    
    for (int i = 1; i <= count; i++) {
        num = va_arg(args, int);
        if (i % 2 == 0 && num > 36 && num < 76) {
            sum += num;
        }
    }
    
    va_end(args);
    return sum;
}

int main(){
    printf("\n%d\n",sum(N,37,38,35,35,80,78,45));
    return 0;
}