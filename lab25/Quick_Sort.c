#include<stdio.h>

void sort(int arr[],int lb,int ub){
    if(lb<ub){
        int i=lb;
        int j=ub;
        int key=arr[lb];
        while(i<j){
            while(arr[i]<=key){
                i++;
            }
            while(arr[j]>key){
                j--;
            }
            if(i<j){
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
        int temp=arr[lb];
        arr[lb]=arr[j];
        arr[j]=temp;
        sort(arr,lb,j-1);
        sort(arr,j+1,ub);
    }
}

int main(){
    int n,temp;
    printf("\nenter length: ");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        printf("\nenter element for %d: ",i+1);
        scanf("%d",&arr[i]);
    }
    sort(arr,0,n-1);
    printf("sorted array: \n");
    for(int i=0;i<n;i++){
        printf("\nelement at %d: %d",i,arr[i]);
    }
}