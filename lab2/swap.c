// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here
    int n;
    int large=0;
    int num1,num2;
    printf("enter array length: ");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        printf("enter array %d:",i+1);
        scanf("%d",&arr[i]);
    }
    printf("enter num1: ");
    scanf("%d",&num1);
    printf("enter num2: ");
    scanf("%d",&num2);
    for(int j=0;j<n;j++){
        if(arr[j]==num1){
            arr[j]=num2;
        }
    }
    for(int z=0;z<n;z++){
        printf("%d",arr[z]);
    }
}