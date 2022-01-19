#include<stdio.h>
int main(){
    int i,j,a[2][3],c=0;
    printf("enter the values\n");
    for(i=0;i<2;i++){
        for(j=0;j<3;j++){
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<2;i++){
        for(j=0;j<3;j++){
            printf("%d\t",a[i][j]);
            c=c+a[i][j];
        }
        printf("\n");
    }
    printf("%d",c);
    return 0;
}