#include<stdio.h>
#include<string.h>

int main(){
    char s[50];
    char *start ,*end;
    int flag=1;

    printf("Enter the string:");
    scanf("%s",s);

    start = s;
    end = s+ strlen(s)-1;

    while (start<end)
    {
        if(*start != *end){
            flag=0;
            break;
        }
        start ++;
        end--;
    }
    if(flag){
        printf("String is Palindrome");
    }
    else{
        printf("String is Not Palindrome");
    }
    return 0;
}