#include <stdio.h>

int main()
{
    int a[3][2],b[2][3],c[3][3];
    for(int i=0;i<3;i++){
        for(int j=0;j<2;j++){
            printf("enter element on of i:%d,j:%d ",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            printf("enter element on of i:%d,j:%d ",i,j);
            scanf("%d",&b[i][j]);
        }
    }
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            c[i][j] = 0;  // initialize
            for(int k=0; k<2; k++){   // shared dimension
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("%d ",c[i][j]);
        }
        printf("\n");
    }
}