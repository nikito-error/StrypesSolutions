#include<stdio.h>
#include<inttypes.h>
//declarations
void increment(int *num);
void setbit(uint64_t *mask,unsigned bit);


void increment(int *num){
    *num++;
}
void setbit(uint64_t *mask,unsigned bit){
    *mask|=(1ULL<<bit);
}
void clearbit(uint64_t *mask,unsigned bit){
    *mask&=(1ULL<<bit);
}
void flipbit(uint64_t *mask,unsigned bit){
    *mask^=(1ULL<<bit);
}
int checkbit(uint64_t mask,unsigned bit){
    return !!(mask &(1ULL<<bit));
}
void printmask(uint64_t mask){
    for(int i=63;i>=0;i--){
        printf("%d",checkbit(mask,i));
    }
    printf("\n");
}
int main(){
    uint64_t m=0;
    setbit(&m,4);
    setbit(&m,5);
    printmask(m);
    return 0;
}