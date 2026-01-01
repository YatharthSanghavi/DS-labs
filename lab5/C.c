#include<stdio.h>
struct Complex{
    int real,complex;
};
struct Complex addComplex(struct Complex a, struct Complex b){
    struct Complex ans;
    ans.real=a.real+b.real;
    ans.complex=a.complex+b.complex;
    return ans;
};
void main(){
    struct Complex n1,n2;
    n1.real=1;
    n1.complex=3;
    n2.real=3;
    n2.complex=4;
    struct Complex  ans = addComplex(n1,n2);
    printf("\n%d+%d i",ans.real,ans.complex);
}