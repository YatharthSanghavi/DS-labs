// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here
    int n;
    int sum=0;
    float avg=0.0;
    printf("enter array length: ");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        printf("enter array %d:",i+1);
        scanf("%d",&arr[i]);
    }
    for(int j=0;j<n;j++){
        sum+=arr[j];
    }
    printf("%d \n",sum);
    avg=(float)sum/n;
    printf("%f",avg);
    return 0;
}