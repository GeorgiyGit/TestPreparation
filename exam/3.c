#include "stdio.h"
#include "string.h"

void func(char *Z1, char *Z2){
    while(Z1<Z2){
        char temp = *Z1;
        *Z1=*Z2;
        *Z2=temp;
        Z1++;
        Z2--;
    }
}
int main(){
    char s[]="jablko a nireareata";
    func(s,strlen(s)-1);
    printf("%s\n",s);
}