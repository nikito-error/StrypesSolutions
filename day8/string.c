#include<stdio.h>
int main(){
    char text[]={'S','t','r','y','p','e','s','\0'};
    char text2[]={'C',' ','l','a','n','g','\0'};
    printf("%s\n",text);
    printf("%s\n",text2);
    printf("%p\n",text);
    printf("%p\n",text2);
    printf("%s\n",text+2);
    return 0;
}