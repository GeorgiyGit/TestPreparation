#include "stdio.h"
int Sci(int a, int b){return a+b;}
int Roz(int a, int b){return a-b;}
int Vyn(int a, int b){return a*b;}
int Del(int a, int b){return a/b;}
int main(void){
    int *p_f(int a,int b);
    char s;
    int a,b;
    while(scanf(" %c %d %d",&s,&a,&b)==3){
        if(s=='S'){p_f=&Sci;printf("%d+%d=%d",a,b,p_f(a,b));}
        if(s=='R'){p_f=&Roz;printf("%d-%d=%d",a,b,p_f(a,b));}
        if(s=='V'){p_f=&Vyn;printf("%d*%d=%d",a,b,p_f(a,b));}
        if(s=='D'){p_f=&Del;printf("%d/%d=%d",a,b,p_f(a,b));}
    }
    return 0;
}
