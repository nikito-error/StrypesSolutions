#include<stdio.h>
#include<inttypes.h>
#include<stdlib.h>
void print(uint64_t *mask,uint64_t *mask1){
     for(int bit=31;bit>=0;bit--){
        printf("%d",!!(*mask1 &(1<<bit))); 
}
    for(int bit=31;bit>=0;bit--){
        printf("%d",!!(*mask &(1<<bit))); 
}
printf("\n");
}
int set(uint64_t *mask,uint64_t *mask1){
   int bit;
scanf("%d",&bit);
if(bit>=0 && bit<32){
*mask|=(1<<bit);
}else if(bit>=32 && bit<64){
     bit=bit-32;
    *mask1|=(1<<bit);
}else{
    printf("Invalid number\n");
}
}
int unset(uint64_t *mask,uint64_t *mask1){
    int bit;
    scanf("%d" ,&bit);
    if(bit>=0 && bit <32){
*mask&=~(1<<bit);
    }else if(bit>=32 && bit<64){
        bit=bit-32;
        *mask1&=~(1<<bit);
    }else{
        printf("Invalid number\n");
    }
}
void printSets(uint64_t *mask,uint64_t *mask1){
    printf("Attendance numbers= ");
    for(int bit=31;bit>=0;bit--){
        if(*mask &(1<<bit)){
            printf("%d ",bit);
        }
}
 for(int bit=31;bit>=0;bit--){
        if(*mask1 &(1<<bit)){
            int newBit=0;
            newBit=bit+32;
            printf("%d ",newBit);
        }
}
printf("\n");
}
void printUnSets(uint64_t *mask,uint64_t *mask1){
    printf("Absence numbers= ");
    for(int bit=31;bit>=0;bit--){
        if(*mask &(1<<bit)){
            
        }else{
            printf("%d ",bit);
        }
}
 for(int bit=31;bit>=0;bit--){
        if(*mask1 &(1<<bit)){
           
        }else{
            int newBit=0;
            newBit=bit+32;
             printf("%d ",newBit);
        }
}
printf("\n");
}
int ChangeStatus(uint64_t *mask,uint64_t *mask1){
int bit;
scanf("%d",&bit);
if(bit>=0 && bit<32){
*mask^=(1<<bit);
}else if(bit>=32 && bit<64){
     bit=bit-32;
    *mask1^=(1<<bit);
}else{
    printf("Invalid number\n");
}
}
int main(){
uint64_t attendance=0;
uint64_t attendance1=0;
int option=0;
do{
printf("1. Set attendance\n");
printf("2. Clear attendance\n");
printf("3. Print all info\n");
printf("4. Print only attendance\n");
printf("5. Print only absence\n");
printf("6. Change status\n");
printf("7. Exit\n");
scanf("%d",&option);
switch(option){
    case 1:
    set(&attendance,&attendance1);
    break;
    case 2:
    unset(&attendance,&attendance1);
    break;
    case 3:
     print(&attendance,&attendance1);
    break;
    case 4:
    printSets(&attendance,&attendance1);
    break;
    case 5:
     printUnSets(&attendance,&attendance1);    break;
     case 6:
     ChangeStatus(&attendance,&attendance1);
     break;
    case 7:
    printf("Exit the program!\n");
    exit(0);
    break;
    default: 
    printf("Invalid choice!\n");break;
}
}while(option!=7);


return 0;
}