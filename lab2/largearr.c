// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here
    int n;
    int large=0;
    printf("enter array length: ");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        printf("enter array %d:",i+1);
        scanf("%d",&arr[i]);
    }
    for(int j=0;j<n;j++){
        if(arr[j]>arr[j+1]){
            if(large<arr[j]){
                large=arr[j];
            }
        }
    }
    printf("%d \n",large);
}