// Online C compiler to run C program online
#include <stdio.h>

int main(){
    int n;
    printf("enter num: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        if(n%i==0){
            printf("%d is factor",i);
        }
    }
}