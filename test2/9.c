#include "stdio.h"
#define N 7

int sum(const int N){
    int sum=0;
    int a=0;
    int i=0;
    for(i=1;i<=N;i++){
        scanf("%d",&a);
        if(i%2==0 && a>36 && a<76){
            sum+=a;
        }
    }
    return sum;
}

int main(){
    printf("\n%d\n",sum(N));
    return 0;
}