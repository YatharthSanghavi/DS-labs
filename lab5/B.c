#include <stdio.h>

struct Employee_Detail{
    int empid;
    char name[100];
    char designation[100];
    float salary;
};

int main() {
    // Write C code here
    struct Employee_Detail e[10];
    for(int i=0;i<5;i++){
        printf("enter id: ");
        scanf("%d",&e[i].empid);
        printf("enter name: ");
        scanf("%s",&e[i].name);
        printf("enter designation: ");
        scanf("%s",&e[i].designation);
        printf("enter salary: ");
        scanf("%f",&e[i].salary);
    }
    for(int i =0;i<5;i++){
        printf("%d",e[i].empid);
        printf("\n%s",e[i].name);
        printf("\n%s",e[i].designation);
        printf("\n%f",e[i].salary);
    }
    return 0;
}