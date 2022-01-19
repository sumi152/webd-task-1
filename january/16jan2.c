#include<stdio.h>
int main()
{
    const int ary[]={ 1,21,3,41,15,6,17,8};
    int *p, *q;
    p = &ary[2];
    q= p+2;
    printf("%d\n",q-arr);
    return 0;
}