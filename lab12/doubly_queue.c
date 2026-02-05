#include <stdio.h>
#define Max 5

int queue[Max];
int f=-1,r=-1;

void enqueue_rear(){
    int item;
    if(r==Max-1){
        printf("overflow");
    }
    else{
        if(f==-1){
            f=0;
        }
        printf("enter element to insert: ");
        scanf("%d",&item);
        queue[++r]=item;
        printf("\ninserted");
    }
}

void enqueue_front(int x){
    if(f==0){
        printf("overflow");
        return;
    }
    if(f==-1){
        f=r=0;
    }
    f--;
    queue[f]=x;
    return;
}

void dequeue_front(){
    if(f==-1 || f>r){
        printf("queue underflow");
    }
    else{
        printf("deleted elemets: %d\n",queue[f]);
        f++;
        if(f>r){
            f=r=-1;
        }
    }
}

int dequeue_rear(){
    if(r==-1){
        printf("queue is underflow");
        return 0;
    }
    int y=queue[r];
    if(r==f){
        r=f=-1;
    }
    r--;
    return y;
}

void display(){
    if(f==-1){
        printf("underflow");
    }
    else{
        for(int i=f;i<=r;i++){
            printf("%d",queue[i]);
        }
        printf("\n");
    }
}

void display_queue(){
    if(f==-1){
        printf("underflow");
        return;
    }
    for(int i=f;i<=r;i++){
        printf("%d\n",queue[i]);
    }
}

int main(){
    int choice;
    int a=1;
    while(a!=0){
        int item,y;
        printf("enter 1 for enqueue front,\n 2 for enqueue rear,\n3 for diaplay,\n4 for dequeue front,\n5 dequeue rear,\n6 for exit: ");
        scanf("%d",&choice);
        switch (choice)
        {
            case 1:
                printf("enter element to insert: ");
                scanf("%d",&item);
                enqueue_front(item);
                break;
            case 2:
                enqueue_rear();
                break;
            case 3:
                display_queue();
                break;
            case 4:
                dequeue_front();
                break;
            case 5:
                y = dequeue_rear();
                printf("%d",y);
                break;
            case 6:
                a=0;
                break;
            default:
                printf("\nenter number between 1 to 4 only");
                break;
        }
    }
}