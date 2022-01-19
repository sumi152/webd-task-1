#include<stdio.h>
int main(){
    int a;
    char b;
    float c;
    printf("enter value of integer ");
    scanf("%d",&a);
    fflush(stdin);
    printf("enter the value of character");
    scanf("%c",&b);
    printf("enter the value of real number ");
    scanf("%f",&c);
    printf("%d %c %f",a,b,c);
    return 0;
}