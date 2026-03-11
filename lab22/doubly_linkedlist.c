#include<stdio.h>
#include<stdlib.h>

struct node {
    int info;
    struct node *link;
    struct node *prev;
};

struct node *left=NULL;
struct node *right=NULL;

struct node *creat_node(int x){
    struct node * new = (struct node *)malloc(sizeof(struct node));
    new->info=x;
    new->link=NULL;
    new->prev=NULL;
    return new;
}

void insert(){
    int x,choice,pos,i;
    printf("\nEnter value: ");
    scanf("%d",&x);

    struct node *new = creat_node(x);

    printf("\n1. Insert at First");
    printf("\n2. Insert at Last");
    printf("\n3. Insert at Position");
    printf("\nEnter choice: ");
    scanf("%d",&choice);

    if(choice==1){
        if(left==NULL){
            left=right=new;
        }
        else{
            new->link=left;
            left->prev=new;
            left=new;
        }
    }

    else if(choice==2){
        if(right==NULL){
            left=right=new;
        }
        else{
            right->link=new;
            new->prev=right;
            right=new;
        }
    }

    else if(choice==3){ 
        printf("Enter position: ");
        scanf("%d",&pos);

        struct node *temp=left;

        for(i=1;i<pos-1 && temp!=NULL;i++){
            temp=temp->link;
        }

        if(temp==NULL){
            printf("Invalid position\n");
            return;
        }

        new->link=temp->link;
        new->prev=temp;

        if(temp->link!=NULL){
            temp->link->prev=new;
        }
        else{
            right=new;
        }

        temp->link=new;
    }
}

void delete(){
    int choice,pos;
    printf("\n1. delete at First");
    printf("\n2. delete at Last");
    printf("\n3. delete at Position");
    printf("\nEnter choice: ");
    scanf("%d",&choice);
    if(choice==1){
        if(left==NULL){
            return;
        }else{
            struct node *temp=left;
            left->link->prev=left->prev;
            left=left->link;
            free(temp);
        }
    }
    else if(choice==2){
        if(right==NULL){
            return;
        }else{
            struct node *temp=right;
            right->prev->link=right->link;
            right=right->prev;
            free(temp);
        }
    }
    else if(choice==3){
        printf("Enter position: ");
        scanf("%d",&pos);

        struct node *sp=left;

        for(int i=1;i<pos-1 && sp!=NULL;i++){
            sp=sp->link;
        }

        if(sp==NULL){
            printf("Invalid position\n");
            return;
        }

        struct node *temp=sp;
        sp->prev->link=sp->link;
        sp->link->prev=sp->prev;
        free(temp);
    }
}

void display(){
    if(left==NULL){
        printf("stack is empty");
        return;
    }
    struct node *temp = left;
    while(temp!=NULL){
        printf("\n%d",temp->info);
        temp=temp->link;
    }
}

void main(){
    insert();
    insert();
    insert();
    insert();
    insert();
    delete();
    delete();
    display();
    // printf("%d",left->info);
}