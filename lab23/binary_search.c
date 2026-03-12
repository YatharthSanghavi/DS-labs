#include<stdio.h>
#define Max 5

int binary_search(int arr[],int key){
    int left=0,right=Max-1;
    while(left<=right){
        int middle=(left+right)/2;
        if(arr[middle]==key){
            return middle;
        }else if(key<arr[middle]){
            right=middle-1;
        }else{
            left=middle+1;
        }
    }
    return -1;
}
 
int main(){
    int arr[Max]={10,20,30,40};
    int key;
    printf("enter key: ");
    scanf("%d",&key);
    int ans=binary_search(arr,key);
    if(ans!=-1){
        printf("value found at: %d",ans);
    }else{
        printf("value not found");
    }
    return 0;
}