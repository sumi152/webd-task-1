#include <stdio.h>
int main (){
    int i,j,a[3][3],b[3][3];
    printf("enter the value of matrix\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("the matrix is \n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    printf("the transpose of the matrix is\n ");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d\t",a[j][i]);
        }
        printf("\n");
    } 
    return 0;
} 