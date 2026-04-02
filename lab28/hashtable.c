#include<stdio.h>
#include<stdlib.h>
#define m 5

int array[m];

void init(){
	for(int i=0;i<m;i++){
		array[i]=-1;
	}
}

int f(int key){
	return key%m;
}

void l(int key){
    int index=f(key);
    if(array[index]==-1){
        array[index]=key;
    }else if(array[index]==key){
        printf("\nkey already exists");
    }else{
        //collison
        for(int prob=1;prob<m;prob++){
            int j=(index+prob)%m;
            if(array[j]==-1){
                array[j]=key;
                return;
            }else if(array[j]==key){
                printf("\nkey already exists");
                return;
            }
        }
        printf("\nhashset is full");
    }
}

int search(int key){
    int index=f(key);
    if(array[index]==-1){
        return -1;
    }else if(array[index]==key){
        return index;
    }else{
        for(int prob=1;prob<m;prob++){
            int j=(index+prob%m);
            if(array[j]==-1){
                return -1;
            }else if(array[j]==key){
                return j;
            }
        }
        return -1;
    }
}

void insert(){
    int a=0;
    for(int i=0;i<m;i++){
        printf("enter value: ");
        scanf("%d",&a);
        l(a);
    }
}

void display(){
    for(int i=0;i<m;i++){
        printf("%d\t",array[i]);
    }
}

void main(){
    init();
    insert();
    display();
    printf("\nindex %d",search(20));
    printf("\nindex %d",search(12));
    printf("\nindex %d",search(32));
        
}