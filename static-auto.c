#include<stdio.h>
int fun()
{
        int a=20;
        printf("%d\n",a);
        a++;
        return 0;
}
int fun2()
{
        auto int b=20;
        printf("%d\n",b);
        b++;
        return 0;
}
int fun3(){
        static int c=20;
        printf("%d\n",c);
        c++;
        return 0;
}
int main()
{       
        fun();
        fun();
        printf("\n");

        fun2();
        fun2();
        printf("\n");
        
        fun3();
        fun3();
        printf("\n");

        return 0;
}