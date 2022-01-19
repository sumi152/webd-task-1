#include<stdio.h>
int main(){
    float C,F;
    printf("input the value of F\n");
    scanf("%f",&F);
    C = 5*(F-32)/9;
    printf("Result= %f",C);
    return 0; 
}