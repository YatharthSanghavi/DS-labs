// Online C compiler to run C program online
#include <stdio.h>

// int main() {
//     // Write C code here
//     int a;
//     printf("enter a: ");
//     scanf("%d",&a);
//     int temp=1;
//     for(int i=a;i>=1;i--){
//         temp=temp*i;
//     }
//     printf("%d",temp);
//     return 0;
// }

int fact(int x){
    if(x==0){
        return 1;
    }
    else{
        return x*fact(x-1);
    }
}

int main(){
    int n;
    printf("enter n: ");
    scanf("%d",&n);
    printf("fact is %d",fact(n));
}