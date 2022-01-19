#include<stdio.h>
int main(){
    char a,b,c,d;
    printf("enter the value of a");
    scanf ("%c",&a);
    fflush(stdin);
    printf("enter the value of b");
    scanf("%c",&b);
    fflush(stdin);
    printf("enter the vlaue of c");
    scanf("%c",&c);
    fflush(stdin);
    printf("enter the value of d");
    scanf("%c",&d);
    printf("%c %c %c %c",a,b,c,d);
    return 0;
}