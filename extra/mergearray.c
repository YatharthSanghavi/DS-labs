#include <stdio.h>
#include <string.h>

int main(){
    int a[5];
    int b[5];
    int temp;
    int size1 = sizeof(a) / sizeof(a[0]);
    int size2 = sizeof(b) / sizeof(b[0]);
    int mergedSize = size1 + size2;
    int c[mergedSize];
    for(int i=0;i<5;i++){
        printf("enter number a[%d]",i);
        scanf("%d",&a[i]);
    }
    for(int i=0;i<5;i++){
        printf("enter number b[%d]",i);
        scanf("%d",&b[i]);
    }
    for(int j=0;j<size1;j++){
        c[j]=a[j];
    }
    for(int j=0;j<size2;j++){
        c[j+size1]=b[j];
    }
    for(int i=0;i<mergedSize;i++){
        for(int j=0;j<mergedSize-i-1;j++){
            if(c[j]>c[j+1]){
                temp=c[j+1];
                c[j+1]=c[j];
                c[j]=temp;
            }
        }
    }
    for(int i=0;i<mergedSize;i++){
        printf("\n%d",c[i]);
    }
}