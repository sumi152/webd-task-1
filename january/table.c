#include<stdio.h>
int main(){
    int a,b,c;
    printf("enter a number\n");
    scanf("%d",&a);
    for(b=1;b<=10;b++){
        c=a*b;
        printf("%d\t",c);
    }
    return 0;
}