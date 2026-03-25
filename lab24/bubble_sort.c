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
        for(int j=i+1;j<n;j++){
            if(arr[i]>arr[j]){
                temp=arr[j];
                arr[j]=arr[i];
                arr[i]=temp;  
            }
        }
    }
    for(int i=0;i<n;i++){
        printf("\nelement at %d: %d",i,arr[i]);
    }
}