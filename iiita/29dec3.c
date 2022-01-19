#include<stdio.h>
int main(){
    int a,b,c;
    float d;
  printf("enter three numbers\n");  
    scanf("%d %d %d",&a,&b,&c);  //in scanf we must use ampersnad(&) there is no need of ampersand(&) in printf
    d=(float)(a+b+c)/3; //formula should be written after the entering the value not before
    printf("%f",d); //after all we should write printf show that output can be shown on screen
    return 0;
}