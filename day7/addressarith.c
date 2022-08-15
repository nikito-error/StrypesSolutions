#include<stdio.h>
int main(){
    int num=42;
    int *p=&num;
    printf("%llu \n",(unsigned long long)p);
    p++;
    printf("%llu \n",(unsigned long long)p);
    return 0;
}