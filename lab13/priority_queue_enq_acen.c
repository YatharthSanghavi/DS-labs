#include<stdio.h>
#define Max 5
struct prq{
    int info,pri;
};

struct prq queue[Max];
int f=-1,r=-1;

void enqueue(){
    int item, prir, i;
    
    if(r == Max - 1){
        printf("\noverflow");
    }
    else{
        printf("\nenter element to insert: ");
        scanf("%d", &item);
        printf("\nenter priority: ");
        scanf("%d", &prir);

        if(f == -1){
            f = 0;
            r = 0;
            queue[r].info = item;
            queue[r].pri = prir;
            printf("\ninserted");
        }
        else{
            for(i = r; i >= f; i--){
                if(queue[i].pri > prir){
                    queue[i+1] = queue[i];
                }
                else{
                    break;
                }
            }
            queue[i+1].info = item;
            queue[i+1].pri = prir;
            r++;
            printf("\ninserted");
        }
    }
}

int check_pri(){
    int min=0;
    for(int i=f;i<=r;i++){
        if(queue[min].pri>queue[i].pri){
            min=i;
        }
    }
    return min;
}

void dequeue(){
    if(f==-1){
        printf("queue is underflow");
        return;
    }
    int min = check_pri();
    if(min==0){
        f=r=-1;
        return;
    }
    for(int i=min;i<=r;i++){
        queue[i].info=queue[i+1].info;
        queue[i].pri=queue[i+1].pri;
    }
    r--;
}

void display(){
    if(f==-1){
        printf("queue is underflow");
        return;
    }
    for(int i=f;i<=r;i++){
        printf("\n%d",queue[i].info);
    }
}

int main(){
    enqueue();
    enqueue();
    enqueue();
    dequeue();
    dequeue();
    display();
    return 0;
}
