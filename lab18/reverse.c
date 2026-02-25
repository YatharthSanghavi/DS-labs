#include<stdio.h>
#include<stdlib.h>


struct node {
    int info;
    struct node *link;
};

// struct node *first;
struct node *creat_node(int x,struct node *first){
    struct node * new = (struct node *)malloc(sizeof(struct node));
    new->info=x;
    new->link=NULL;
    return new;
}

struct node *insertf(int x,struct node *first){
    struct node * new = creat_node(x,first);
    new->link=first;
    first=new;
    return first;
}

struct node *reserve(struct node *first){
    struct node *prev=NULL;
    struct node *save=first;
    struct node *curr=NULL;
    while(save!=NULL){
        curr=save;
        save=save->link;
        curr->link=prev;
        prev=curr;
    }
    first=curr;
    return first;
}

void display(struct node *first){
    if(first==NULL){
        printf("stack is empty");
        return;
    }
    while(first!=NULL){
        printf("\n%d",first->info);
        first=first->link;
    }
}

void main(){
    struct node *first =NULL;
    first=insertf(10,first);
    first=insertf(20,first);
    first=insertf(15,first);
    first=insertf(40,first);
    first=reserve(first);
    display(first);
}