#include "stdio.h"
unsigned int reverseLeft(unsigned int x, int n){
    unsigned int mask=1;
    unsigned int mask2=1;
    int i=0;
    int flag=0;

    while((mask<<1)!=0){
        mask<<=1;
    }

    for(i=0;i<n;i++){
        if(x & mask)flag=1;
        else flag=0;

        x<<=1;

        if(flag==1)x=x|mask2;   
    }
    return x;
}
unsigned int reverse(unsigned int x,int k){
    unsigned int a = x >> (sizeof(unsigned int) * 8 - k);
    unsigned int b = x << k;
    return a | b;
} 
unsigned int rotateLeft(unsigned int x, int n) {
   unsigned int temp=x, x1, x2, dlzka=0;
   while(temp) {
      dlzka++;
      temp>>=1;
   }
   temp = x;
   x1= (temp<<n) >> dlzka;
   x2= (temp<<n)-(x1<<dlzka);

   return x1|x2;
}
int main(){
    unsigned int t1 = reverseLeft(3487561234,4);
    unsigned int t2 = reverse(3487561234,4);
    unsigned int t3 = reverse(3487561234,4);
    printf("%u %u %u\n",t1,t2,t3);
}
//11001111110111111111011000010010
//11111101111111110110000100101100
//00000000011000011111111101010100