#include<stdio.h>
#include<string.h>
void Fstrlen(){
    char name[]="Nikolai";
    int len=strlen(name);
    printf("strlen = %d\n",len);
}
void Fstrnlen(){
    char name[]="Nikolai";
    int len=5;
    len=strnlen(name,len);
    printf("strnlen = %d\n\n",len);
}
void Fstrcpy(){
    char name[]="Nikolai";
    char name2[20];
    strcpy(name2,name);
    printf("Print name = %s\n",name);
    printf("Print strcopy = %s\n\n",name2);
}
void Fstrncpy(){
    char name[]="Nikolai";
    char name2[20]="";
    strncpy(name2,name,3);
    printf("Print name = %s\n",name);
    printf("Print strncopy = %s\n\n",name2);
}
void Fstrcat(){
    char name[]="Nikolai";
    char name2[20]="Nikolaev";
    strcat(name2,name);
    printf("Print name = %s\n",name);
    printf("Print strcat = %s\n\n",name2);
}
void Fstrncat(){
    char name[]="Nikolai";
    char name2[20]="Nikolaev";
    strncat(name2,name,4);
    printf("Print name = %s\n",name);
    printf("Print strncat = %s\n\n",name2);
}
void Fstrcmp(){
    char name[]="Nikolai";
    char name2[20]="Nikolaev";
    if(strcmp(name2,name)==0){
        printf("Strcmp = Equals\n");
    }else{
        printf("Strcmp = Not Equals\n");
    }
}
void Fstrncmp(){
    char name[]="Nikolai";
    char name2[20]="Nikolaev";
    if(strncmp(name2,name,2)==0){
        printf("Strncmp = Equals\n\n");
    }else{
        printf("Strncmp = Not Equals\n\n");
    }
}
void Fstrstr(){
    char name[]="Hi Computer";
    char name2[]="Co";
    char *pointer;
    pointer=strstr(name,name2);
        printf("Substr = %s\n",pointer);
}
int main(){
    Fstrlen();
    Fstrnlen();
    Fstrcpy();
    Fstrncpy();
    Fstrcat();
    Fstrncat();
    Fstrcmp();
    Fstrncmp();
    Fstrstr();
    return 0;
}