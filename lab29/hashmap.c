#include<stdio.h>
#include<stdlib.h>
#define m 5

struct node{
    int key;
    int value;
};

struct node array[m];

void init(){
	for(int i=0;i<m;i++){
		array[i].key=-1;
	}
}

int f(int key){
	return key%m;
}

void l(int key,int val){
    int index=f(key);
    if(array[index].key==-1){
        array[index].key=key;
        array[index].value=val;
        return;
    }else if(array[index].key==key){
        printf("\nkey already exists");
        return;
    }else{
        //collison
        for(int prob=1;prob<m;prob++){
            int j=(index+prob)%m;
            if(array[j].key==-1){
                array[j].key=key;
                array[j].value=val;
                return;
            }else if(array[j].key==key){
                printf("\nkey already exists");
                return;
            }
        }
        printf("\nhashset is full");
    }
}

int search(int value){
    int index=f(value);
    if(array[index].key==-1){
        return -1;
    }else if(array[index].value==value){
        return array[index].key;
    }else{
        for(int prob=1;prob<m;prob++){
            int j=(index+prob%m);
            if(array[j].key==-1){
                return -1;
            }else if(array[j].value==value){
                return array[j].key;
            }
        }
        return -1;
    }
}

void insert(){
    int a=0,val=0;
    for(int i=0;i<m;i++){
        printf("enter key: ");
        scanf("%d",&a);
        printf("enter value: ");
        scanf("%d",&val);
        l(a,val);
    }
}

void display(){
    for(int i=0;i<m;i++){
        printf("%d\t",array[i].value);
    }
}

void main(){
    init();
    insert();
    display();
    printf("\value found at key %d",search(20));
    printf("\nvalue found at key %d",search(12));
    printf("\nvalue found at key %d",search(32));
        
}