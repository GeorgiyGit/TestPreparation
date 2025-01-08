#include "stdio.h"
#define N 10
int main(){
    /*const int N = 10 dont work*/
    int arr[N];
    arr[2]=3;
    printf("%d\n",arr[2]);
}