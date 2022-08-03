#include<stdio.h>
#include<math.h>
#define EPS 0.001003
int compare1(float a,float b){
    return a==b;
}
int compare2(float a,double b){
    return a==b;
}
int compare3(float a,float b){
    return fabs(a-b)<EPS;
}
int compare4(float a,float b){
    return fabs(a-b)<EPS*fmax(fabs(a-b),fabs(a+b));
}
int main(){
    float a=100.0f;
    float b=0.0f;
    for(int i=0;i<500;i++,b+=0.2f){
        if(compare1(a,b)){
            printf("Equals");
        }else{
            printf("Not Equals");
        }
        if(compare2(a,b)){
            printf("Equals");
        }else{
            printf("Not Equals");
        }
        if(compare3(a,b)){
            printf("Equals");
        }else{
            printf("Not Equals");
        }
        if(compare4(a,b)){
            printf("Equals");
        }else{
            printf("Not Equals");
        }
    }

}