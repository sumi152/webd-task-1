#include<stdio.h>  //this is header file. there can be more than one header file and can be arranged in any order
int main(){   //this is fuction which needs a return value.
    int a,b,c;  //this is for variable declaration which can undertake intergs
    float d;    //this is also variable declaration which can undertake real numbers
    a=5;  //this is variable intialization
    b=6;  //if we don't intialize the value then it will take automatic random one which is also known as garbage value
    c=5;
    d= (float)(a+b+c)/3; //typecasting which is needed where because if we do not write float then it will not the real value
    printf("the average is %f",d); //
    return 0;
}