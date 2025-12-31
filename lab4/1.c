#include<stdio.h>
void main(){
    int n;
    printf("Enter n");
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
            printf("Enter  number");
            scanf("%d",&a[i]);
    }
    int *p;
    p=a;
    for(int i=0;i<n;i++){
        printf("%d\n",*p);
        p++;
    }
}