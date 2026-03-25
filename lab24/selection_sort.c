#include<stdio.h>

int main(){
    int n,temp;
    printf("\nenter length: ");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        printf("\nenter element for %d: ",i+1);
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n-1;i++){
        int min_index=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[min_index]){
                min_index = j;
            }
        }
        temp = arr[min_index];
        arr[min_index] = arr[i];
        arr[i] = temp;
    }
    for(int i=0;i<n;i++){
        printf("\nelement at %d: %d",i,arr[i]);
    }
}