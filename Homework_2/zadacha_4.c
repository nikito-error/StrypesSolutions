#include<stdio.h>
int main(){
    //in terminal open location and then ./zadacha_4<numbersz4.txt
    int a,n,ans=0;
    scanf("%d",&n);//n=2 || n=3
    if(n==3){
        ans=1;
    }else{
        ans=0;
    }
    for(int i=0;i<n;i++){
        scanf("%d",&a);
        ans=ans^a;

    }
        printf("%d\n",ans);
    }