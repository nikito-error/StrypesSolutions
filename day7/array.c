#include<stdio.h>
int sum(int nums[],int len){
    int sum=0;
    for(int i=0;i<len;i++){
        sum+=nums[i];
    }
    return sum;
}
int main(){
    int nums[5]={10,20,45,5,67};
    int len;
    len=sizeof(nums)/sizeof(nums[0]);
    printf("%d",sum(nums,len));
}