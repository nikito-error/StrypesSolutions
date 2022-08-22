#include<stdio.h>
#include"funcs.h"

int main(){
    int a=20;
    int b=10;
    int result=sum(a,b)*mul(a,b);
    printf("Result = %d\n",result);
    return 0;
}