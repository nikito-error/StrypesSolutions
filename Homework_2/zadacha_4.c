#include<stdio.h>
int main(){
    //in terminal open location and then ./zadacha_4<numbersz4.txt
    int a,n,ans=0,b,c;
    scanf("%d",&n);//n=2 || n=3
    if(n==2){
        scanf("%d",&a);
        scanf("%d",&b);
        if((!a && b) || (a && !b) )
        {
            ans=1;
        }else{
            ans=0;
        }

    }
    if(n==3){
        scanf("%d",&a);
        scanf("%d",&b);
        scanf("%d",&c);
        if((!a && b && c) || (a && !b && c) || (a && b && !c) )
        {
            ans=1;
        }else{
            ans=0;
        }

    }
        printf("%d\n",ans);
    }