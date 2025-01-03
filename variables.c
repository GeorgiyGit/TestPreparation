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
    return 0;
}

void all_sizes(){
    int n = 0;
    float fl = 0.0;
    double d = 0.0;
    long l = 0;
    long int ln = 0;

    printf("int - %d\n",n);
    printf("float - %f\n",fl);
    printf("double - %f\n",fl);
    printf("long - %ld\n",l);
    printf("long int - %ld\n\n",ln);

    printf("sizeof(int) - %lu\n",(unsigned long)sizeof(n));
    printf("sizeof(float) - %lu\n",(unsigned long)sizeof(fl));
    printf("sizeof(double) - %lu\n",(unsigned long)sizeof(d));
    printf("sizeof(long) - %lu\n",(unsigned long)sizeof(l));
    printf("sizeof(long int) - %lu\n\n\n",(unsigned long)sizeof(ln));
}

void struct_sizes(){
    Test* test=NULL;
    Test2 *test2=NULL;

    printf("sizeof(Test) - %lu\n", (unsigned long)sizeof(test));
    printf("Test - %p\n\n",(void*)test);

    test = (Test*)malloc(sizeof(Test));

    printf("malloc sizeof(Test) - %lu\n", (unsigned long)sizeof(test));
    printf("malloc Test - %p\n\n",(void*)test);

    free(test);
    printf("malloc(free) sizeof(Test) - %lu\n", (unsigned long)sizeof(*test));
    printf("malloc(free) Test - %p\n\n",(void*)test);


    test2 = (Test2*)realloc(test2,sizeof(Test2));
    printf("realloc sizeof(Test) - %lu\n", (unsigned long)sizeof(*test2));
    printf("realloc Test - %p\n\n",(void*)test2);

    test2=(Test2*)realloc(test2,0);
    printf("realloc(free) sizeof(Test2) - %lu\n", (unsigned long)sizeof(*test2));
    printf("realloc(free) Test2 - %p\n\n",(void*)test2);

    test = (Test*)calloc(1,sizeof(Test));
    printf("realloc sizeof(Test2) - %lu\n", (unsigned long)sizeof(*test));
    printf("realloc Test2 - %p\n\n",(void*)test);

    free(test);
    printf("calloc(free) sizeof(Test) - %lu\n", (unsigned long)sizeof(*test));
    printf("calloc(free) Test - %p\n\n",(void*)test);

    printf("sizeof(union) - %lu\n\n\n",(unsigned long)sizeof(union TestUnion));
}

