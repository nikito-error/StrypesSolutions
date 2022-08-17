#include<stdio.h>
#include<limits.h>
int secondMax(const int*arr,size_t n,int *secondMax){
int max1=INT_MIN;
int max2=INT_MIN;
for(int i=0;i<n;i++){
    if(arr[i]>max1){
        max2=max1;
        max1=arr[i];
    }else if(max2<arr[i] && max1>arr[i]){
        max2=arr[i];
    }
}
return max2;

}
int main(){
    int n,sm;
    int br=0;
    printf("Enter size of array:\n");
    scanf("%d",&n);
    if(n==0){
        printf("Array is empty\n");
        return -1;
    }
    int arr[n];
    printf("Enter elements of array:\n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
        if(arr[0]==arr[i]){
            br++;
        }
    }
    if(n==1){
        printf("Array contains only one element\n");
         return -1;
    }else if(br==n){
        printf("Array elements are equal\n");
        return -1;
    }else{
        printf("%d",secondMax(arr,n,&sm));
        return 0;
    }
}
