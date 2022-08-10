#include<stdio.h>
#include<inttypes.h>
#include<stdlib.h>
void print(uint64_t *mask){
    for(int bit=31;bit>=0;bit--){
        printf("%d",!!(*mask &(1<<bit))); 
}
for(int bit=63;bit>=32;bit--){
        printf("%d",!!(*mask &(1<<bit))); 
}
printf("\n");
}
int set(uint64_t *mask){
   int bit;
scanf("%d",&bit);
*mask|=(1<<bit);
}
int unset(uint64_t *mask){
    int bit;
    scanf("%d" ,&bit);
*mask&=~(1<<bit);
}
int unset(uint64_t *mask){
    int bit;
    scanf("%d" ,&bit);
*mask&=~(1<<bit);
}
int main(){
uint64_t attendance=0;
int option=0;
do{
printf("1. Set attendance\n");
printf("2. Clear attendance\n");
printf("3. Attendance info\n");
printf("4. Change attendance\n");
printf("5. Exit\n");
scanf("%d",&option);
switch(option){
    case 1:
    set(&attendance);
    break;
    case 2:
    unset(&attendance);
    break;
    case 3:
     print(&attendance);
    break;
    case 4:
    break;
    case 5:
    printf("Exit the program\n");
    exit(0);
    break;
    default: 
    printf("Invalid choice\n");break;
}
}while(option!=5);


return 0;
}