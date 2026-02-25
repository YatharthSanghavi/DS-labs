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

struct node *copy(int x,struct node *s){
    struct node * new = creat_node(x,s);
    if(s == NULL){
        return new;
    }
    struct node *save=s;
    while (save->link!=NULL)
    {
        save=save->link;
    }
    save->link=new;
    return s;
}

void main(){
    struct node *first =NULL;
    first=insertf(10,first);
    first=insertf(20,first);
    first=insertf(15,first);
    first=insertf(15,first);
    struct node *sa=first;
    struct node *s=NULL;
    while(sa!=NULL){
        s = copy(sa->info,s);
        sa=sa->link;
    }
    display(first);
    printf("copy\n");
    display(s);
}