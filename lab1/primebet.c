// Online C compiler to run C program online
#include <stdio.h>
#include <stdbool.h>

bool isPrime(int num) {
    if (num <= 1) {
        return false;
    }
   
    for (int j = 2; j * j <= num; j++) { 
        if (num % j == 0) {
            return false;
        }
    }
    return true;
}
int main(){
    int n;
    int n2;
    bool gcd=true;
    printf("enter num: ");
    scanf("%d",&n);
    printf("enter num2: ");
    scanf("%d",&n2);
    for(int i=n;i<=n2;i++){
        if(isPrime(i)){
            printf("%d is prime",i);
        }
    }
}