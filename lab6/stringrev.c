// Online C compiler to run C program online
#include <stdio.h>
#include<string.h>

int top=-1;

void push(char c, char s[]){
    s[++top]=c;
}

void display(char c[]){
    for(int i=strlen(c)-1;i>=0;i--){
        printf("%c",c[i]);
    }
}

int main() {
    // Write C code here
    char s[100];
    printf("enter string: ");
    scanf("%s",&s);
    int i=0;
    while(s[i]!='\0'){
        push(s[i++], s);
    }
    display(s);
    return 0;
}