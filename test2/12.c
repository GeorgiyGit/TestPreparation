#include "stdio.h"
void pocty(unsigned int x, short* unitBits, short* zeroBits){
    int i=0;
    unsigned int mask=1;
    int res=0;
    for(i=0;i<16;i++){
        res=x & mask;
        if(res)(*unitBits)++;
        else (*zeroBits)++;
        x=x>>2;
    }
}
void main(){
    unsigned int x=4;
    short unitBits = 0;
    short zeroBits=0;
    pocty(x,&unitBits,&zeroBits);
    printf("%d %d\n",unitBits, zeroBits);
}

//4 - 00000100