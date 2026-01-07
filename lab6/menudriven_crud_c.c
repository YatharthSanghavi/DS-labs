#include <stdio.h>

int a[100];
int top=-1;
int change1,num;
int in;
void push(int x){
    if(top>=100){
        printf("\nstack overflow");
    }
    a[++top]=x;
}

int pop(){
    return a[top--];
}

int peep(int x){
    if(top==-1){
        printf("\nstack is empty");
        return 0;
    }
    if(top<x){
        printf("\nout of bound");
        return 0;
    }
    return a[top-x+1];
}

void display(){
    for(int i=0;i<=top;i++){
        printf("\n%d",a[i]);
    }
}

void change(){
    display();
    printf("\nenter number to change: ");
    scanf("%d",&num);
    printf("\nenter update number: ");
    scanf("%d",&change1);
    for(int i=0;i<100;i++){
        if(a[i]==num){
            a[i]=change1;
        }
    }
}


int main() {
    // Write C code here
    int c=0;
    int a=1;
    printf("enter 6 to stop: ");
    while(a){
        printf("\n1 for push,2 for pop, 3 for peep, 4 for change , 5 display, 6 to stop\n");
        scanf("%d",&c);
        switch(c){
            case 1:
                int len=0;
                printf("enter length to add: ");
                scanf("%d",&len);
                int n=0;
                for(int i=0;i<len;i++){
                    printf("enter number at %d",i);
                    scanf("%d",&n);
                    push(n);
                }
                break;
            case 2:
                int pope = pop();
                printf("element pop is: %d",pope);
                break;
            case 3:
                printf("enter index: ");
                scanf("%d",&in);
                int peepe = peep(in);
                printf("element peep is: %d",peepe);
                break;
            case 4:
                change();
                break;
            case 5:
                display();
                break;
            case 6:
                a=0;
                break;
        }
    }
    return 0;
}