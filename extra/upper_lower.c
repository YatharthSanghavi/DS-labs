#include <stdio.h>
#include <string.h>

int main(){
    char c[10];
    printf("enter name: ");
    scanf("%s",&c);
    for(int i=0;i<strlen(c);i++){
        if(c[i]>=97){
            c[i]=c[i]-32;
        }
        else{
            c[i]=c[i]+32;
        }
    }
    printf("%s",c);
}