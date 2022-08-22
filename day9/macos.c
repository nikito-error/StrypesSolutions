#include<stdio.h>
#define pi 3.1415
#define SUM(x,y) ((x)+(y))
#define SETBIT(mask,bit) (mask|=(1<<(bit)))
int main(){
    double num=SUM(10,2);
    printf("num = %.2lf\n",num);
    int num2=SUM(45,5)-SUM(1,3);
    printf("num = %d\n",num2);
    return 0;
}