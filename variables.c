#include "stdio.h"
#include "stdlib.h"

typedef struct Test{
    int n1;
    double n2;
} Test;

typedef struct Test2{
    int n1;
    double n2;
    long n3;
} Test2;
union TestUnion {
    Test t;
    Test2 t2;
};

void all_sizes();
void struct_sizes();

int main(){
    all_sizes();
    struct_sizes();
}

void all_sizes(){
    int n = 0;
    float fl = 0.0;
    double d = 0.0;
    long l = 0;
    long long ll = 0;
    long long int lln = 0;
    long int ln = 0;

    printf("int - %d\n",n);
    printf("float - %f\n",fl);
    printf("double - %lf\n",fl);
    printf("long - %ld\n",l);
    printf("long long- %lld\n",ll);
    printf("long long int - %lld\n",lln);
    printf("long int - %ld\n\n",ln);

    printf("sizeof(int) - %ld\n",sizeof(n));
    printf("sizeof(float) - %ld\n",sizeof(fl));
    printf("sizeof(double) - %ld\n",sizeof(d));
    printf("sizeof(long) - %ld\n",sizeof(l));
    printf("sizeof(long long) - %ld\n",sizeof(ll));
    printf("sizeof(long long int) - %ld\n",sizeof(lln));
    printf("sizeof(long int) - %ld\n\n\n",sizeof(ln));
}

void struct_sizes(){
    Test* test;
    
    printf("sizeof(Test) - %ld\n", sizeof(test));
    printf("Test - %p\n\n",test);

    test = (Test*)malloc(sizeof(Test));

    printf("malloc sizeof(Test) - %ld\n", sizeof(test));
    printf("malloc Test - %p\n\n",test);

    free(test);
    printf("malloc(free) sizeof(Test) - %ld\n", sizeof(*test));
    printf("malloc(free) Test - %p\n\n",test);
    
    Test2 *test2 = (Test2*)realloc(test2,sizeof(Test2));
    printf("realloc sizeof(Test) - %ld\n", sizeof(*test2));
    printf("realloc Test - %p\n\n",test2);

    (Test2*)realloc(test2,0);
    printf("realloc(free) sizeof(Test2) - %ld\n", sizeof(*test2));
    printf("realloc(free) Test2 - %p\n\n",test2);

    test = (Test*)calloc(1,sizeof(Test));
    printf("realloc sizeof(Test2) - %ld\n", sizeof(*test));
    printf("realloc Test2 - %p\n\n",test);

    free(test);
    printf("calloc(free) sizeof(Test) - %ld\n", sizeof(*test));
    printf("calloc(free) Test - %p\n\n",test);


    union TestUnion t;
    printf("sizeof(union) - %ld\n\n\n",sizeof(union TestUnion));
}

