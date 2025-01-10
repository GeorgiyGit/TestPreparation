#include "stdio.h"
void main(){
    char *p1, *p2;
    char str[]={'S','l','u','s','k','a','?','Z','P','r','P','r','2','\0'};
    p1=str;
    for(p2=p1;(p2-p1)<sizeof(str) && *p2!='?';p2++);
    printf("%d",(p2<p1+sizeof(str))?(p2-p1+1):-1);
    printf("%c",(p2<p1+sizeof(str))?(p2+2):p1+1);
}