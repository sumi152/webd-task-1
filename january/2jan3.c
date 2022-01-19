#include<stdio.h>
int main(){
    float S,P,n,r;
    printf("ENTER THE VALUE OF P N R\n");
    scanf("%f %f %f",&P,&n,&r);
    S=(float)(P*n*r)/100;
    printf("%f",S);
    return 0;
}