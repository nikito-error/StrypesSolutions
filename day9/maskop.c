#include<stdio.h>

#define SETBIT(mask,bit) (mask |= (1<<(bit)))
#define CLEARBIT(mask,bit) (mask &= ~(1ull<<(bit)))
#define FLIPBIT(mask,bit) (mask ^= (1ull<<(bit)))
#define CHECKBIT(mask,bit) !!(mask & (1ull<<(bit)))

int main(){
    int mask=0;
    SETBIT(mask,3);
    printf("num = %d\n",mask);
    return 0;
}