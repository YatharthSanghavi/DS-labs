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

struct node *sort(struct node *first){
    struct node *i,*j;
    int temp;
    for(i=first;i!=NULL;i=i->link){
        for(j=i->link;j!=NULL;j=j->link){
            if(i->info>j->info){
                temp=i->info;
                i->info=j->info;
                j->info=temp;
            }
        }
    }
    return first;
}

struct node *distint(struct node *first){
    struct node *save=first;
    while(save->link!=NULL){
        if(save->info==save->link->info){
            save->link=save->link->link;
        }else{
            save=save->link;
        }
    }
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
    first=insertf(15,first);
    first=sort(first);
    first=distint(first);
    display(first);
}