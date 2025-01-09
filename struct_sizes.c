#include "stdio.h"

typedef struct Test1{
    char c;
    int n;
} Test1;

typedef struct Test2{
    char c;
    char c2;
    char c3;
    int n;
} Test2;

typedef struct Test3{
    char c;
    char c2;
    int n;
    double d;
} Test3;

typedef struct Test4{
    char c;
    char c2;
    int n;
    long double d;
} Test4;

typedef struct Test5{
    long double d;
} Test5;

typedef struct Test6{
    char arr[32];
} Test6;

typedef struct Test7{
    Test6 t;
    int a;
    char c;
} Test7;

typedef struct Test8{
    int a;
    char c;
} Test8;

typedef struct Test9{
    char c;
    int a;
} Test9;


int main(){
    printf("Test1 - %lu\n",(unsigned long)sizeof(Test1));
    printf("Test2 - %lu\n",(unsigned long)sizeof(Test2));
    printf("Test3 - %lu\n",(unsigned long)sizeof(Test3));
    printf("Test4 - %lu\n",(unsigned long)sizeof(Test4));
    printf("Test5 - %lu\n",(unsigned long)sizeof(Test5));
    printf("Test7 - %lu\n",(unsigned long)sizeof(Test7));
    printf("Test8 - %lu\n",(unsigned long)sizeof(Test8));
    printf("Test9 - %lu\n",(unsigned long)sizeof(Test9));
    return 0;
}