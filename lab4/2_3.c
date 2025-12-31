// Online C compiler to run C program online
#include <stdio.h>

void fun(int a, int b){
    int temp=a;
    a=b;
    b=temp;
    printf("\n%d",a);
    printf("\n%d",b);
}

void funp(int* a,int* b){
    int tmp;
    tmp=*a;
    *a=*b;
    *b=tmp;
    printf("\n%d",*a);
    printf("\n%d",*b);
}

int main() {
    // Write C code here
    int a=10;
    int b=20;
    fun(a,b);
    funp(&a,&b);
}