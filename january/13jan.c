#include <stdio.h>
int main(){
    int i,a[5],b[5],c[5];
    printf("enter the value digit a\n");
    for(i=0;i<5;i++){
 
        scanf("%d",&a[i]);
    }
    printf("the value of digit b\n");
    for(i=0;i<5;i++){
        scanf("%d",&b[i]);
    }
    for(i=0;i<5;i++){
        c[i]=b[i]+a[i];
    }
    for(i=0;i<5;i++){
        c[i];
        printf("value of index is %d and the value of sum is %d\n",i,c[i]);
    }
    for(i=4;i>=0;i--){
        c[i];
        printf("value of index is %d and the value of sum  is %d\n",i,c[i]);
    }
    return 0;
}