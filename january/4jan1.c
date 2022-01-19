#include<stdio.h>
int main(){
    int a,b,c,d,e;
    float f;
    printf("enter the value of variables\n");
    scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
    f=(a+b+c+d+e)/5;
    printf("%f",f);
    return 0;
}