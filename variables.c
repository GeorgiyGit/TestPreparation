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
void str_sizes();

int main(){
    all_sizes();
    struct_sizes();
    str_sizes();
    return 0;
}

void all_sizes(){
    int n = 0;
    float fl = 0.0;
    double d = 0.0;
    long l = 0;
    long int ln = 0;
    long double llf =0.0;


    printf("int - %d\n",n);
    printf("float - %f\n",fl);
    printf("double - %f\n",fl);
    printf("long - %ld\n",l);
    printf("long int - %ld\n",ln);
    printf("long double - %f\n\n",(double)llf);

    printf("sizeof(int) - %lu\n",(unsigned long)sizeof(n));
    printf("sizeof(float) - %lu\n",(unsigned long)sizeof(fl));
    printf("sizeof(double) - %lu\n",(unsigned long)sizeof(d));
    printf("sizeof(long) - %lu\n",(unsigned long)sizeof(l));
    printf("sizeof(long int) - %lu\n",(unsigned long)sizeof(ln));
    printf("sizeof(long double) - %lu\n\n\n",(unsigned long)sizeof(llf));
}

void str_sizes(){
    char c='a';
    char str[] = "123";
    char str2[] = {'1','2','3','\0'};
    char* strPtr = (char*)malloc(4*sizeof(char));
    strPtr[0]='1';
    strPtr[1]='2';
    strPtr[2]='3';

    printf("char - %c\n",c);
    printf("sizeof(char) - %lu\n\n",(unsigned long)sizeof(c));

    printf("array str1 - %s\n",str);
    printf("sizeof(str1) - %lu\n\n",(unsigned long)sizeof(str));

    printf("array str2 - %s\n",str2);
    printf("sizeof(str2) - %lu\n\n",(unsigned long)sizeof(str2));

    printf("ptr str - %s\n",strPtr);
    printf("sizeof(ptr str) - %lu\n\n\n",(unsigned long)sizeof(strPtr));
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
