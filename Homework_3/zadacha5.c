#include<stdio.h>
#include<inttypes.h>
unsigned onesCount(uint64_t mask){
int br=0;
for(int i=1;i<=mask;i++){

if((mask>>(i-1)) & 1){
br++;
}
}
printf("%d\n",br);
return 0;
}
int main(){
uint64_t mask;
printf("Enter a number:\n");
scanf("%" SCNu64,&mask);
onesCount(mask);
return 0;
}
