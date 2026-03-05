#include<stdio.h>
#include<stdlib.h>

struct node {
    int info;
    struct node *link;
};

struct node *last=NULL;

// struct node *first;
struct node *creat_node(int x,struct node *first){
    struct node * new = (struct node *)malloc(sizeof(struct node));
    new->info=x;
    new->link=NULL;
    return new;
}

struct node *insertf(int x,struct node *first){
    struct node * new = creat_node(x,first);
    new->info=x;
    if(first==NULL){
        new->link=new;
        first=last=new;
    }else{
        
    }
}

struct node *deletef(struct node *first){
    struct node *save = first;
    if(first==NULL){
        printf("stack is empty");
        return NULL;
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
    first=deletef(first);
    display(first);
}