#include<stdio.h>
int main (){
    int i,j,a[3][3],b[3][3],c[3][3],sum,k;
    printf("enter the element of matrix a\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("the matrix is\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d \t",a[i][j]);
        }
        printf("\n");
    }
    printf("enter the element of matarx b\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            scanf("%d",&b[i][j]);
        }
    }
        
    printf("the matrix is \n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf(" %d\t",b[i][j]);

        }
        printf("\n");
    }
    printf("the product is \n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            sum =0;
            for(k=0;k<3;k++){
                sum=a[i][k]*b[k][j];
                c[i][j]=sum;
            }
        }
        printf("\n");
    }
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d\t",c[i][j]);
        }
        printf("\n");
    }
    return 0;
}