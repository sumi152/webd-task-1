
#include<stdio.h>
int main(){
    int a;
    char b;
    float c;
    printf("enter value of a\n");
    scanf("%d",&a);
    fflush(stdin);
    printf("enter value of b\n");
    scanf("%c",&b);
    printf("enter value of c\n");
    scanf("%f",&c);
    printf("outputs are %d %c %f",a,b,c);
    return 0;
}