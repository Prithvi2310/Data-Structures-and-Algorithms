#include<stdio.h>

void fun1(n){
    if(n>0){
        printf("%d ",n);
        fun1(n-1);
    }
}

void fun2(n){
    if(n>0){
        fun2(n-1);
        printf("%d ",n);
    }
}

int main()
{
    int x = 3;
    printf("Head recursion output: ");
    fun1(x);
    printf("\nTail recursion output: ");
    fun2(x);
    printf("\n");
    return 0;
}