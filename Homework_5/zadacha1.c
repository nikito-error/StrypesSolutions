#include <stdio.h>
#define minTwo(x, y) ((x) < (y) ? (x) : (y))
#define maxTwo(x, y) ((x) > (y) ? (x) : (y))
#define MIN(x, y, z) minTwo(minTwo((x), (y)), (z))
#define MAX(x, y, z) maxTwo(maxTwo((x), (y)), (z))
#define SETBIT(mask, bit) (mask |= (1 << (bit)))
#define CLEARBIT(mask, bit) (mask &= ~(1ull << (bit)))
#define FLIPBIT(mask, bit) (mask ^= (1ull << (bit)))
#define CHECKBIT(mask, bit) !!(mask & (1ull << (bit)))
#define SWAP(a,b) ((a)^=(b)^=(a)^=(b))
int main()
{
    int a, b, c;
    printf("Enter values of a,b,c:\n");
    scanf("%d %d %d", &a, &b, &c);
    printf("The minimum value is = %d\n", MIN(a, b, c));
    printf("The maximum value is = %d\n", MAX(a, b, c));
    int mask=0;
SETBIT(mask,4);
SETBIT(mask,5);
SETBIT(mask,6);
CLEARBIT(mask,5);
FLIPBIT(mask,8);
 printf("Mask set-4,5,6, clear-5, reverse-8, check-12,8\n");
   for(int bit=31;bit>=0;bit--){
        printf("%d",!!(mask &(1<<bit))); 
}
putchar('\n');
printf("Check 12 bit = %d\n",CHECKBIT(mask,12));
printf("Check 8 bit = %d\n",CHECKBIT(mask,8));
printf("Normal values: a = %d b = %d\n",a,b);
SWAP(a,b);
printf("After Swap: a = %d b = %d\n",a,b);
putchar('\n');

    return 0;
}