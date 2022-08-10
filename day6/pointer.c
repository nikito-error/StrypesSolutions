#include<stdio.h>
#include<stdint.h>
int main(){
    int num=20;
    int *ptr=&num;
    double pi=3.14;
    double *piPtr=&pi;
    printf("%p\n",&num);
    printf("%d\n",*ptr);
    printf("%p\n",piPtr);
    printf("%lf\n",*piPtr);

    return 0;
}