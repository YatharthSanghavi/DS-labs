// Online C compiler to run C program online
#include <stdio.h>

int main(){
    int n;
    int n2;
    int gcd=1;
    printf("enter num: ");
    scanf("%d",&n);
    printf("enter num2: ");
    scanf("%d",&n2);
    for(int i=1;i<=n2;i++){
        gcd=gcd*n;
    }
    printf("%d",gcd);
}