#include<stdio.h>
#include<math.h>
#include<stdlib.h>
// gcc zadacha4.c -lm -o zadacha4
//./zadacha4 1 2 1
int quadEq(double a,double b,double c,double *x1,double *x2){

       printf("x1 = %.2lf \nx2 = %.2lf \n",*x1,*x2);

    return 0;
}
int main(int argc,char * argv[]){
double a,b,c,x1,x2,D;
    int a1=atoi(argv[1]);
    int b1=atoi(argv[2]);
    int c1=atoi(argv[3]);
    a=a1;
    b=b1;
    c=c1;
    D=(pow(b,2)-(4*a*c));
    if(D>0){
    x2=(-b+(sqrt((pow(b,2)-(4*a*c)))))/(2*a);
    x1=(-b-(sqrt((pow(b,2)-(4*a*c)))))/(2*a);
    quadEq(a,b,c,&x1,&x2);
    }else if(D==0){
        x1=-b/(2*a);
        printf("%.2lf\n",x1);
        printf("%.2lf\n",x1);
        return 0;
    }else{
        printf("No real roots\n");
        return -1;
    }
    return 0;
}