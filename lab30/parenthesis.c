#include <stdio.h>
#include <string.h>

#define MAX 100000

int isBalanced(char s[]) {
    char stack[MAX];
    int top = -1;

    for (int i = 0; s[i] != '\0'; i++) {
        char ch = s[i];

        if (ch == '(' || ch == '{' || ch == '[') {
            stack[++top] = ch;
        }
      
        else {
            if (top == -1) return 0; 
            char topChar = stack[top--];

            if ((ch == ')' && topChar != '(') ||
                (ch == '}' && topChar != '{') ||
                (ch == ']' && topChar != '[')) {
                return 0;
            }
        }
    }

    return (top == -1) ? 1 : 0;
}

int main() {
    int t;
    printf("enter nu: ");
    scanf("%d", &t);
    int i=0,n=t;
    int res[t];
    for(int i=0;i<=t;i++){
        res[i]=0;
    }
    while(t--){
        char s[MAX];
        printf("enter: ");
        scanf("%s", s);
        int balance = isBalanced(s);
        res[i++]=balance;
    }
    for(int i=0;i<n;i++){
        printf("%d\n",res[i]);
    }
    return 0;
}