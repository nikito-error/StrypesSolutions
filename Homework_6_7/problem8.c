#include<stdio.h>
#include<stdlib.h>

void Add(const char *p1,const char *p2,char *result);

void Add(const char *p1,const char *p2,char *result){
  int f=(atoi(p1))+(atoi(p2));
  if(atoi(p1)<0 || atoi(p2)<0){
   fprintf(stderr,"Invalid values");
   sprintf(result,"%s","");
  }else {
   sprintf(result,"%d",f);
  }
 
}

int main(){
    char result[11];
    Add("12345","678",result);
    printf("%s\n",result);
    Add("55","33",result);
    printf("%s\n",result);
    Add("-5","33",result);
    printf("%s\n",result);
    Add("5","33",result);
    printf("%s\n",result);
    return 0;
}