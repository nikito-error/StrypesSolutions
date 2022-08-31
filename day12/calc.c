#include<stdio.h>
#include<string.h>
int main(int argc,char **argv){
    if(!strcmp(argv[1],"-m")){
        double min=0,num;
        sscanf(argv[2],"%lf",&min);
        for(int i=2;i<argc;i++){
            sscanf(argv[i],"%lf",&num);
            min=(num<min) ? num:min;
        }
        printf("Min= %.2lf",min);

    }else if(!strcmp(argv[1],"-M")){
double max=0,num;
        sscanf(argv[2],"%lf",&max);
        for(int i=2;i<argc;i++){
            sscanf(argv[i],"%lf",&num);
            max=(num>max) ? num:max;
        }
        printf("Max= %.2lf",max);
    }else if(!strcmp(argv[1],"-s")){
        double sum =0,num; 
        for(int i=2;i<argc;i++){
            sscanf(argv[i],"%lf",&num);
            sum+=num;
        }
        printf("Sum= %lf",sum);
    }else if(!strcmp(argv[1],"-a")){
         double sum =0,num; 
for(int i=2;i<argc;i++){
            sscanf(argv[i],"%lf",&num);
            sum+=num;
        }
        printf("Sum= %lf",sum/(argc-2));
    }else {
        fprintf(stderr,"Invalid option");
        return 1;
    }
    return 0; 
}