#include<stdio.h>
#include<string.h>

void SPRINTF(char *szBuffer,char *szPattern,char **args);


void SPRINTF(char *szBuffer,char *szPattern,char **args){
    int res=0,br=0;
    char p[3]="%s";
    int N=strlen(szPattern);
    int M=strlen(p);
    for (int i = 0; i <= N - M; i++)
    {
        int j;
        for (j = 0; j < M; j++)
            if (szPattern[i+j] != p[j])
                break;
  
        if (j == M) 
        {
           res++;
        }
    }
    for(int i=0;i<100;i++){
        if(args[i]!=NULL){
            br++;
        }else{
            break;
        }
    }
    szBuffer=szPattern;
    if(res==br){
        if(res==1){
        printf(szBuffer,args[0]);
        }else if (res==2){
            printf(szBuffer,args[0],args[1]);
        }else if (res==3){
            printf(szBuffer,args[0],args[1],args[2]);
        }else if (res==4){
            printf(szBuffer,args[0],args[1],args[2],args[3]);
        }else if (res==5){
            printf(szBuffer,args[0],args[1],args[2],args[3],args[4]);
        }
}else{
    printf("Invalid values or specifiers\n");
}
}

int main(){
    char szBuffer[100];
    const char* args[]={"Arg1","Arg2"};
    SPRINTF(szBuffer,(char *)"This function takes %s and %s as arguments\n",(char **)args);
    return 0;
}