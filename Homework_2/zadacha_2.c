#include<stdio.h>
#include<math.h>
int main(){
    double L,R,H,V,cos1=0;
    scanf("%lf %lf",&R,&H);
    V=M_PI*pow(R,2)*H;
    printf("A) V = %.2lf\n",V);
    scanf("%lf %lf %lf",&R,&L,&H);
    V=L*(pow(R,2)*acos((R-H)/R)-(R-H)*sqrt(2*R*H-pow(H,2)));
    printf("B) V = %.2lf\n",V);

}