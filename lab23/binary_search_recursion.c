#include<stdio.h>
#define Max 5

int binary_search(int arr[],int key,int left,int right){
    if(left<=right){
        int middle=(left+(right-left)/2);
        if(arr[middle]==key){
            return middle;
        }else if(key<arr[middle]){
            return binary_search(arr,key,left,middle-1);
        }else{
            return binary_search(arr,key,middle+1,right);
        }
    }return -1;
}
 
int main(){
    int arr[Max]={10,20,30,40};
    int key, left=0,right=Max-1;
    printf("enter key: ");
    scanf("%d",&key);
    int ans=binary_search(arr,key,left,right);
    if(ans!=-1){
        printf("value found at: %d",ans);
    }else{
        printf("value not found");
    }
    return 0;
}