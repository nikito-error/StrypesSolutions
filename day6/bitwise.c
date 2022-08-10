#include<stdio.h>
#include<stdint.h>
int main(){
    uint8_t a=73;
    uint8_t b=27;
    printf("a & b = %d\n",a&b);
    printf("a ^ b = %d\n",a^b);
    printf("a | b = %d\n",a|b);
    printf("~a = %d\n",~a);
    return 0;
}