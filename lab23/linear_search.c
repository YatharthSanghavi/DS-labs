#include<stdio.h>
#define Max 5

int linear_search(int arr[],int key){
    for(int i=0;i<Max;i++){
        if(arr[i]==key){
            return i;
        }
    }
    return -1;
}

int main(){
    int arr[Max]={10,20,30,40};
    int key;
    printf("enter key: ");
    scanf("%d",&key);
    int ans=linear_search(arr,key);
    if(ans!=-1){
        printf("value found at: %d",ans);
    }else{
        printf("value not found");
    }
    return 0;
}