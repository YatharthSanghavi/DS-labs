// Online C compiler to run C program online
#include <stdio.h>
#include <stdbool.h>
int main(){
    int n;
    bool a = true;
    printf("enter num: ");
    scanf("%d",&n);
    for(int i=2;i<n;i++){
        if(n%i==0){
            a=false;
            break;
        }
    }
    if(a){
        printf("num is prime");
    }else{
        printf("num is not prime");
    }
}