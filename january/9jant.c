#include<stdio.h>
int main(){
    int a;
    printf("enter the marks\n");
    scanf("%d",&a);
    if(a<=100 && a>=90){
        printf("first division");
    }
    else{
        if(a<90 && a>=70){
            printf("second division");
        }
       else {
           if(a<70){
           printf("fail");
           }
       }
    }
    return 0;
}
