#include<stdio.h>
#include<math.h>
int main(){
    double BMI=0,height,mass;
    scanf("%lf %lf",&mass,&height);
    BMI=mass/pow(height,2);
    printf("A) BMI = %.2lf\n",BMI);
    BMI=1.3*mass/pow(height,2.5);
    printf("B) BMInew = %.2lf\n",BMI);
    return 0;
}
