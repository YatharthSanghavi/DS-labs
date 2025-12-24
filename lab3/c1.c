#include <stdio.h>

int main()
{
    int a[2][2],c[2][2];
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            printf("enter element on of i:%d,j:%d ",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            c[i][j]=0;
            if(i==j){
                c[i][j]=a[i][j];
            }
            else{
                c[i][j]=a[j][i];
            }
        }
    }
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            printf("%d",c[i][j]);
        }
        printf("\n");
    }
}