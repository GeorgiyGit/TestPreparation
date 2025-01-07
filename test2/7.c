#include "stdio.h"
#include "stdlib.h"

void allocateArray(int* a, int** b){
    //*a=malloc(10*sizeof(int));
    //*b=malloc(10*sizeof(int));
    b=malloc(10*sizeof(int));
}
int main(){
    int* arr = NULL;
    allocateArray(arr,&arr);
    free(arr);
    return 0;
}