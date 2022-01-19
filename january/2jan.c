#include<stdio.h>
//average of seven student age
int main(){
    int a,b,c,d,e,f,g;
    float m;
    printf("enter 7 students age\n");
    scanf("%d %d %d %d %d %d  %d",&a,&b,&c,&d,&e,&f,&g);
    m=(float)(a+b+c+d+e+f+g)/7;
    printf("%f",m);
    return 0;
}