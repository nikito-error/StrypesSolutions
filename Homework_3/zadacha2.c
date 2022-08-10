#include<stdio.h>
#include<math.h>
//purviqt test ot uslovieto e greshen
//nqma logika da e S = 10,83 i P = 15 osven ako ne razdelim S/4 i P/2
//po nqkakva golqma vuzmojnost ima shans da ima nqkakvo reshenie, poradi zakruglqne
//no ako dadeno uslovie e nepulno,togava i purviq testcase se smqta za greshen
int triangle(double a,double b,double c,double *S,double *P){
if(a>=0 && b>=0 && c>=0){
       printf("S = %.2lf \nP = %.2lf \n",*S,*P);
    return 0;
}else{
       printf("Invalid triangle sides!\n");
    return -1;
}
}
int main(){
    double a,b,c,S,P,S1;
    while(scanf("%lf %lf %lf",&a,&b,&c)!=EOF){
    S1=(a+b+c)/2;
    S=sqrt(S1*(S1-a)*(S1-b)*(S1-c));
    P=a+b+c;
    triangle(a,b,c,&S,&P);
    }
    return 0;
}