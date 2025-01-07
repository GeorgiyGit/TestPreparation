#include "stdio.h"
int recursion(int n, int a, int b){
    if(n<=1)return a;
    return recursion(n-1,b,a+b);
}
int main(){
    printf("%d",recursion(5,0,1));
    return 0;
}
//1 1 2 3 5 8