#include<stdio.h>
int main(){
    printf( "char %lu Bytes \n",sizeof(char));
    printf( "int %lu Bytes \n",sizeof(int));
    printf( "short %lu Bytes \n",sizeof(short));
    printf( "long %lu Bytes \n",sizeof(long));
    printf( "long long %lu Bytes \n",sizeof(long long));
    printf( "1 Byte %d bits \n",__CHAR_BIT__);
}