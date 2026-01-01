#include <stdio.h>
#include <string.h>

int main(){
    char a[10];
    printf("enter string: ");
    scanf("%s",&a);
    char temp;
    int n = strlen(a);
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            if(a[j]>a[j+1]){
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    printf("%s",a);
}