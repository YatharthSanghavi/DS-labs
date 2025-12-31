// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here
    int n;
    printf("enter array length: ");
    scanf("%d",&n);
    int arr[n];
    int arr2[n];
    for(int i=0;i<n;i++){
        printf("enter array %d:",i+1);
        scanf("%d",&arr[i]);
    }
    for(int j=0;j<n;j++){
        arr2[j]=arr[j];
    }
    for(int z=0;z<n;z++){
        printf("%d",arr2[z]);
    }
}