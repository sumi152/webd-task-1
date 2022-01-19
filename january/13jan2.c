#include<stdio.h>
int main(){
    int i,b=0,c[5];
    float d;
    printf("enter the marks\n");
    for(i=0;i<5;i++){
        scanf("%d",&c[i]);
    }
    for(i=0;i<5;i++){
    b=b+c[i];
    }
    d=(float)(b)/5;
    printf("the average is %f",d);
    return 0;
    
}