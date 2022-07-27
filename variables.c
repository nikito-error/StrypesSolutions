#include<stdio.h>
int main(){
    char var1;
    var1=98;
    short var=-34;
    int var2=3535;
    long var3=531535; 
    unsigned long var4=351513515315;
    printf("Value= %d\n",var);
    printf("Value= %d\n",var2);
    printf("Value= %ld\n",var3);
    printf("Value= %lu\n",var4);

    printf("Char var = %d \n",var1);
    printf("Char var = %c \n",var1);
    printf("SIZE OF INT = %lu \n",sizeof(int));
    return 0;
}