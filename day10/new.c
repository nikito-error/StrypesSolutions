#include<stdlib.h>
#include<stdio.h>
#define COUNT 10
int main(){
    double *num=(int *)calloc(COUNT,sizeof(int));
    if(NULL==malloc(sizeof(int))){
        fprintf(stderr,"malloc error!");
        return 1;
    }
    printf("%p\n",malloc(sizeof(int)));
    free(malloc(sizeof(int)));
    return 0;
}