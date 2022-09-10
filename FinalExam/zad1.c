#include<stdio.h>
#include <stdlib.h>
#include<time.h>
int findRandom(int min, int max)
{
    return min + rand() % (max+1 - min);
}
int main(){
     srand(time(NULL));
    int n,m,k;
    char arr[7]={'!','?','$','@','*','%','-'};
    printf("Enter n:");
    scanf("%d",&n);
    char *num = (char *)malloc(n * sizeof(char));
    if (NULL == num)
    {
        fprintf(stderr, "malloc error!");
        return 1;
    }
    for (int i = 0; i < n; i++)
    {
        num[i] = findRandom('a', 'z');
    }
    printf("Enter m:");
    scanf("%d", &m);
    num = (char *)realloc(num, (n + m) * sizeof(char));
    if (NULL == num)
    {
        fprintf(stderr, "realloc error!");
        return 1;
    }
    for (int i = n; i < n + m; i++)
    {
        num[i] = findRandom('A','Z');
    }
     printf("Enter k:");
    scanf("%d", &k);
     num = (char *)realloc(num, (n + m+k) * sizeof(char));
    if (NULL == num)
    {
        fprintf(stderr, "realloc error!");
        return 1;
    }
    int RandIndex=rand()%7;
    for (int i = n+m; i < n + m+k; i++)
    {
        num[i] = findRandom('A','Z');
    }
    printf("Aray of elements:\n");
    for (int i = 0; i < n + m + k; i++)
    {
        printf("%c", num[i]);
    }
    putchar('\n');
    return 0;
}