#include<stdio.h>

void printElements(char *num,int size){
     printf("Array of elements:\n");
    for (int i = 0; i < size; i++)
    {
        printf("%c", num[i]);
    }
       putchar('\n');
}

int CountlowerCase(char *num,int size){
    int count=0;
    for (int i = 0; i < size; i++)
    {
       if(num[i]>='a' && num[i]<='z'){
        count++;
       }
    }
    return count;
}

char mostFrequency(char *num,int size){
    int maxcount=0;
    char elfreq;
    for(int i=0;i<size;i++){
        int count=0;
        for(int j=0;j<size;j++){
            if(num[i]==num[j]){
                count++;
            }
        }
        if(count>maxcount){
            maxcount=count;
            elfreq=num[i];
        }
    }
    return elfreq;
}