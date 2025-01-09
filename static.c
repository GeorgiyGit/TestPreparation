#include "stdio.h"

void fun(){
    static int n = 0;
}
void fun2(){
    static int n = 1;
    n++;
    printf("%d\n",n);
}
int main(){
    fun();
    fun2();
    fun2();
    return 0;
}