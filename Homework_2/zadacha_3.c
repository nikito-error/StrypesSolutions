#include<stdio.h>
#include<float.h>
int main(){
    //in terminal open location and then ./zadacha_3<numbersz3.txt
    double arr[3],max=-DBL_MAX;
        for(int i=0;i<3;i++){
        scanf("%lf",&arr[i]);
        if(max<arr[i]){
            max=arr[i];
        }
    }
    printf("%.2lf",max);
}