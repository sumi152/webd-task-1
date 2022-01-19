#include <stdio.h>
int main(){
    int i,j,a[3][3],row,col;
    printf("enter the value of matrix element \n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    printf("sum of row and column respectively is \n ");
    for(i=0;i<3;i++){
        row =0;
        col =0;
       
        for(j=0;j<3;j++){
   
            
            row = row +a[i][j];
            col = col +a[j][i];
           
            }
            printf(" sum of row is %d\n sum of column  is %d\n",row,col);
    }
    return 0;
}
