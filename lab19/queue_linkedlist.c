#include<stdio.h>
#include<stdlib.h>


struct node {
    int info;
    struct node *link;
};

struct node *rear=NULL;

struct node *creat_node(int x){
    struct node * new = (struct node *)malloc(sizeof(struct node));
    new->info=x;
    new->link=NULL;
    return new;
}

struct node *inserte(int x,struct node *first){
    struct node * new = creat_node(x);
    if(first == NULL){
        first=new;
        rear=first;
        return first;
    }
    rear->link=new;
    rear=rear->link;
    return first;
}

struct node *deletef(struct node *first){
    struct node * save = first;
    if(first==NULL){
        printf("stack is empty");
        return first;
    }
    if(first->link==NULL){
        free(save);
        first =NULL;
        return first;
    }
    first = save->link;
    free(save);
    return first;
}

void display(struct node *first){
    if(first==NULL){
        printf("stack is empty");
        return;
    }
    while(first!=rear){
        printf("\n%d",first->info);
        first=first->link;
    }
    printf("\n%d",rear->info);
}

void main(){
    struct node *first =NULL;
    first=inserte(10,first);
    first=inserte(20,first);
    first=inserte(30,first);
    first=inserte(40,first);
    first=inserte(50,first);
    first=deletef(first);
    display(first);
}