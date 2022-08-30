#include<stdio.h>
void Reverse(char *ptr){
char *end=ptr;
char tmp;
if(ptr){
    while(*end){
        end++;
    }
    end--;
    while(ptr<end){
        tmp=*ptr;
        *ptr++=*end;
        *end--=tmp;

    }
}
}
int main(){
int n=200;
char str[n];
printf("Enter a string:\n");
fgets(str,n,stdin);
Reverse(str);
printf("After reverse %s \n",str);
    return 0;
}