// Online C compiler to run C program online
#include <stdio.h>
#include<string.h>

int top=-1;
int check1=1;
void push(char c, char s[]){
    s[++top]=c;
}

void display(char c[]){
    for(int i=strlen(c)-1;i>=0;i--){
        printf("%c",c[i]);
    }
}

void check(char c[]){
    for(int i=0;i<strlen(c)/2;i++){
        if(c[i]==strlen(c)/2){
            break;
        }
        if(c[i]==c[strlen(c)-i]){
            check1=1;
        }
        if(c[i]!=c[strlen(c)-i-1]){
            check1=0;
            break;
        }
    }
    if(check1){
        printf("\ndone");
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
    // display(s);
    check(s);
    
    return 0;
}