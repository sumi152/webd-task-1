#include <stdio.h>
int main(){
    int s, b[10],i;
    s=2;
    printf("enter the value of b\n");
    for(i=0;i<10;i++){
        scanf("%d",&b[i]);
    }
    for(i=0;i<10;i++){
        if(b[i]==s){
            printf("yes\n");
        }
        else{
            printf("no\n");
        }
    }
    return 0;
}