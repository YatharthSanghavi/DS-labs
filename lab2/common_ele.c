// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here
    int n;
    int large=0;
    printf("enter array length: ");
    scanf("%d",&n);
    int arr[n];
    int arr2[n];
    for(int i=0;i<n;i++){
        printf("enter array %d:",i+1);
        scanf("%d",&arr[i]);
    }
    for (int j = 0; j < n; j++) {
        printf("enter array %d:",j+1);
        scanf("%d",&arr2[j]);
    }
    for(int z=0;z<n;z++){
        for(int k=0;k<n;k++){
            if(arr[k]==arr2[z]){
                printf("common element is: %d",arr[k]);
            }
        }
    }
}