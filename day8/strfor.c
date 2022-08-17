#include<stdio.h>
int main(){
    char name[]="Ivan 123";
    int i=0;
    while(name[i]){
        putchar(name[i]);
        i++;
    }
    putchar('\n');
    printf("Count: %d",i);
    return 0;
}