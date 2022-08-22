#include<stdio.h>
#define OS 2
int main(){
    #if OS==1
        printf("Linux\n");
    #elif OS==2
        printf("Windows\n");
    #elif OS==3
        printf("macOS\n");
     #else
        printf("Invalid");
    #endif
    return 0;
}