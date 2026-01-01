#include <stdio.h>

struct Employee_Detail{
    int empid;
    char name[100];
    char designation[100];
    float salary;
};

int main() {
    // Write C code here
    struct Employee_Detail e;
    printf("enter id: ");
    scanf("%d",&e.empid);
    printf("enter name: ");
    scanf("%s",&e.name);
    printf("enter designation: ");
    scanf("%s",&e.designation);
    printf("enter salary: ");
    scanf("%f",&e.salary);
    printf("%d",e.empid);
    printf("\n%s",e.name);
    printf("\n%s",e.designation);
    printf("\n%f",e.salary);
    return 0;
}