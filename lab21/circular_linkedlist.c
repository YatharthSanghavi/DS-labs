#include<stdio.h>
#include<stdlib.h>

struct node {
    int info;
    struct node *link;
};

struct node *last=NULL;
int count =0;

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
        ++count;
    }else{
        new->link=first;
        last->link=new;
        first=new;
        ++count;  
    }
    return first;
}

struct node *inserte(int x,struct node *first){
    struct node * new = creat_node(x,first);
    new->info=x;
    if(first == NULL){
        new->link=new;
        first=last=new;
        ++count;
    }else{
        new->link=first;
        last->link=new;
        last=new;
        ++count;
    }
    return first;
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

struct node *deletee(struct node *first){
    if(first==NULL){
        printf("stack is empty");
        return NULL;
    }
    struct node *save = first;
    if(first->link==NULL){
        free(save);
        first=NULL;
        return first;
    }
    while(save->link!=last){
        save=save->link;
    }
    save->link=first;
    free(last);
    last=save;
    return first;
}

struct node *deletes(int x,struct node *first){
    if(first==NULL){
        printf("stack is empty");
        return NULL;
    }
    struct node *save = first;
    struct node *pred = NULL;
    while(save->info!=x&&save!=last){
        pred = save;
        save=save->link;
    }
    if(save->info!=x){
        printf("node not found");
        return first;
    }
    if(first==last){
        first=last=NULL;
    }else if(save->info==first->info){
        first=first->link;
        last->link=first;
    }else{
        pred->link=save->link;
        if(save==last){
            last=pred;
        }
    }
    free(save);
    return first;
}

void display(struct node *first){
    if(first==NULL){
        printf("stack is empty");
        return;
    }
    struct node *temp = first;
    while(temp->link!=first){
        printf("\n%d",temp->info);
        temp=temp->link;
    }
    printf("\n%d",temp->info);
}

void main(){
    struct node *first =NULL;
    first=insertf(10,first);
    first=insertf(20,first);
    first=inserte(15,first);
    first=inserte(40,first);
    first=deletes(40,first);
    display(first);
}