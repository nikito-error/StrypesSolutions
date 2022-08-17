#include<stdio.h>
unsigned sumArrayDigits(const int *arr,size_t n){
    int sum=0,p=0;
    for(int i=0;i<n;i++){
        int t=arr[i];
        while(t!=0){
            p=t%10;
            sum=sum+p;
            t=t/10;
        }
    }
    return sum;

}
int main(){
    int n;
    printf("Enter size of array:\n");
    scanf("%d",&n);
    int arr[n];
     printf("Enter Elements of array:\n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("%d",sumArrayDigits(arr,n));
    return 0;
}