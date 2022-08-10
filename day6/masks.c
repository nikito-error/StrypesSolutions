#include<stdio.h>
#include<stdint.h>
int main()
{
    int bit=0;
uint16_t mask=0;
    for(int bit=15;bit>=0;bit--){
        printf("%d",!!(mask &(1<<bit))); 
}
printf("\n");
bit=12;
mask|=(1<<bit);
bit=3;
mask|=(1<<bit);
bit=5;
mask|=(1<<bit);
bit=4;
mask|=(1<<bit);

for(int bit=15;bit>=0;bit--){
        printf("%d",!!(mask &(1<<bit))); 
}
printf("\n");
bit=4;//clear
mask&=~(1<<bit);
for(int bit=15;bit>=0;bit--){
        printf("%d",!!(mask &(1<<bit))); 
}
printf("\n");
bit=3;//flip
mask^=~(1<<bit);
bit=11;
mask^=~(1<<bit);
for(int bit=15;bit>=0;bit--){
        printf("%d",!!(mask &(1<<bit))); 
}
printf("\n");
}