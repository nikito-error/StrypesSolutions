#include<stdio.h>
#include<math.h>
int rectangle(double w,double h,double *S,double *P){
if(h>=0 && w>=0){
       printf("S = %.2lf \nP = %.2lf \n",*S,*P);
    return 0;
}else{
       printf("Invalid triangle sides!\n");
    return -1;
}
}
int main(){
    double w,h,S,P;
    while(scanf("%lf %lf",&w,&h)!=EOF){
    S=w*h;
    P=2*(w+h);
    rectangle(w,h,&S,&P);
    }
    return 0;
}