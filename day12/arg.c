#include<stdio.h>
//char *argv[] == **argv 
int main(int argc,char **argv){
    //argc->arguments count
    //argv ->arguments vector;
    printf("Arguments count: %d\n",argc);
    for(int i=0;i<argc;i++){
        printf("argv (%d)=%s\n",argc,argv[i]);
    }
 /*  int i=0;
    while(argv[i]!=NULL){
printf("argv (%d)=%s\n",argc,argv[i]);
i++;
    }
    */
        return 0;
}