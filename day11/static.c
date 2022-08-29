#include<stdio.h>
//static can be accessed only in this file
void counter(){
    static int cnt=10;
    cnt+=2;
    printf("%d\n",cnt);
}
int main(){
    counter();
    counter();
    return 0;
}