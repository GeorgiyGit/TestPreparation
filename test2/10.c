#include "stdio.h"
#include "string.h"
void substrReverse(char* str, int i, int n){
    int a=i;
    int b=n+i-1;
    int j=0;
    char temp=' ';
    int size = strlen(str);
    if(b>=size)b=size-1;
    if(n<=0 || i<0 || i>=size-1)return;

    for(j=a;j<(b-a)/2+a;j++){
        temp=str[j];
        str[j]=str[b-(j-a)];
        str[b-(j-a)]=temp;
    }
}
int main(){
    char str[10]="ASDFGHJKL";
    printf("%s\n",str);
    substrReverse(str,2,4);
    printf("%s\n",str);
}