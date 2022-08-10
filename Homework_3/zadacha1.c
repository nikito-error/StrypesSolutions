#include<stdio.h>
#include<stdint.h>
int main(){
    double number1,number2;
    char c;
    while(scanf("%lf %c %lf",&number1,&c,&number2)!=EOF){
        if(c=='+'){
            printf("%.2lf\n",number1+number2);
        }else if(c=='-'){
            printf("%.2lf\n",number1-number2);
        }else if(c=='*'){
            printf("%.2lf\n",number1*number2);
        }else if(c=='/'){
            printf("%.2lf\n",number1/number2);
        }
    }

    return 0;
}