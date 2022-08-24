#include<stdio.h>
int main(){
    double number;
    double temp,sqrt;
    printf("Enter a number:\n");
    scanf("%lf",&number);
    sqrt=number/2;
    temp=0;
    while(sqrt!=temp){
        temp=sqrt;
        sqrt=(number/temp +temp)/2;
    }
    printf("Square root is %.2lf\n",sqrt);
    return 0;
}