#include<stdio.h>
int main(){
    int num;
    scanf("%d",&num);
    printf("Num = %d {stdout} \n",num);
    fprintf(stderr,"Num =%d {stderr}\n",num);
    return 0;
}