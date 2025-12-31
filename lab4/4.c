// Online C compiler to run C program online
#include <stdio.h>

void main() {
    int n;
    printf("Enter n");
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        printf("Enter number: ");
        scanf("%d",&a[i]);
    }
    int tmp=0;
    int *p = a;
    for(int i=0;i<n;i++,p++){
        if(tmp<*p){
            tmp=*p;
        }
    }
    printf("%d",tmp);
}