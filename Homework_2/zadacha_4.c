#include<stdio.h>
int main(){
    //in terminal open location and then ./zadacha_4<numbersz4.txt
    int a,n,ans=0,b,c;
    scanf("%d",&n);//n=2 || n=3
    if(n==2){
        scanf("%d,%d",&a,&b);
         ans=a^b;
    }else if(n==3){
        scanf("%d,%d,%d",&a,&b,&c);
      ans=a^b^c;
    }
        printf("%d\n",ans);
    }