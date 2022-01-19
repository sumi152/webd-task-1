#include<stdio.h>
int main (){
    int n, A[20], i;
    printf("how  many number to read?");
    scanf("%d",&n);
    for(i=0;i<n; ++i){
        scanf("%d",&A[i]);
    }
        for(i=n-1; i>=0;--i){
            printf("%d",A[i]);
            printf("\n");
        }
        return 0;

    
}