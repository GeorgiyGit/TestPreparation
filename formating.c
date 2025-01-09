#include <stdio.h>
int main(){
    printf("4.2 - %4.2f\n",123.512);
    printf("5.2 - %5.2f\n",12.12);
    printf("6.2 - %6.2f\n",12.12);
    printf("7.2 - %7.2f %7.2f\n",12.12,124.3);
    printf("7.2 - %7.2f %7.1f\n",5.234, 52);
    printf("6.2 - %7.2f %7.2f\n",5.234, 52);
    printf("4 - %4f\n",12.1);
    printf("4 - %4d %4d\n",12,5); 
}