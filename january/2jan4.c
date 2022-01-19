#include<stdio.h>
int main(){
    int y2,x2,y1,x1;
    float m;
    printf("enter the value of a,b,c,d respectively\n");
    scanf("%d %d %d %d",&y2,&x2,&y1,&x1);
    m=(float)(y2-x2)/(y1-x1);
    printf("%f",m);
    return 0;


}