#include<stdio.h>
int main(){
    int num=50;
    int *ptr=&num;
    char sym='Z';
    char *symPtr=&sym;
    double pi=3.14;
    double *piPtr=&pi;
    printf("%p\n",ptr);
    printf("%p\n",symPtr);
    printf("%p\n",piPtr);

    printf("%d\n",*ptr);
    printf("%c\n",*symPtr);
    printf("%lf\n",*piPtr);
    return 0;
}