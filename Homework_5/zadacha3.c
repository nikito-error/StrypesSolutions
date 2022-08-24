#include<stdlib.h>
#include<stdio.h>
#include<time.h>
int main(){
    int n,m,p;
    printf("Enter n:");
    scanf("%d",&n);
    double *num=(double *)malloc(n*sizeof(double));
    if(NULL==num){
        fprintf(stderr,"malloc error!");
        return 1;
    }
    srand(time(0));
    for(int i=0;i<n;i++){
        num[i]=(double)rand()/RAND_MAX;
    }
    printf("Enter m:");
    scanf("%d",&m);
    num=(double *)realloc(num,(n+m)*sizeof(double));
     if(NULL==num){
        fprintf(stderr,"malloc error!");
        return 1;
    }
    for(int i=n;i<n+m;i++){
        num[i]=(double)rand()/RAND_MAX+1;
    }
    printf("Enter p:");
    scanf("%d",&p);
    num=(double *)realloc(num,(n+m+p)*sizeof(double));
     if(NULL==num){
        fprintf(stderr,"malloc error!");
        return 1;
    }
    for(int i=n+m;i<n+m+p;i++){
        num[i]=(double)rand()/RAND_MAX+2;
    }
    printf("Aray of elements:\n");
    for(int i=0;i<n+m+p;i++){
        printf("%.2lf ",num[i]);
    }
    putchar('\n');
    free(num);
    return 0;
}