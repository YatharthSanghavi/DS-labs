// Online C compiler to run C program online
#include <stdio.h>

int gcd(int a, int b){
    if(b==0){
        return a;
    }
    return gcd(b,a%b);
}

int main(){
    int n;
    int n2;
    printf("enter num: ");
    scanf("%d",&n);
    printf("enter num2: ");
    scanf("%d",&n2);
    printf("%d",gcd(n,n2));
}