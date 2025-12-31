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
    for (int j = 0; j < n - 1; j++) {
        for (int k = 0; k < n - j - 1; k++) {
            if (arr[k] > arr[k + 1]) {
                large = arr[k];
                arr[k] = arr[k + 1];
                arr[k + 1] = large;
            }
        }
    }
    for(int z=0;z<n;z++){
        printf("%d",arr[z]);
    }
}