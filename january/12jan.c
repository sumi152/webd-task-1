#include<stdio.h>
int main(){
    int a,b,temp;
    printf("enter three digit\n");
    scanf("%d %d ",&a,&b);
    temp=a;
    a=b;
    b=temp;
    printf("%d %d",a,b);

    
   
    return 0;
}