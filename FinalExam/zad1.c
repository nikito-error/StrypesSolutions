#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "zad1.h"
// main class
// gcc zad1.c zad1funcs.c -o zad1
//./zad1

int findRandom(int min, int max)
{
    return min + rand() % (max + 1 - min);
}

int main()
{
    srand(time(NULL));
    int n, m, k;
    char arr[7] = {'!', '?', '$', '@', '*', '%', '-'};
    printf("Enter n:");
    scanf("%d", &n);
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
        num[i] = findRandom('A', 'Z');
    }
    printf("Enter k:");
    scanf("%d", &k);
    num = (char *)realloc(num, (n + m + k) * sizeof(char));
    if (NULL == num)
    {
        fprintf(stderr, "realloc error!");
        return 1;
    }
    for (int i = n + m; i < n + m + k; i++)
    {
        int RandIndex = rand() % 7;
        num[i] = arr[RandIndex];
    }
    num = (char *)realloc(num, (n + m + k + 1) * sizeof(char));
    if (NULL == num)
    {
        fprintf(stderr, "realloc error!");
        return 1;
    }
    for (int i = n + m + k; i < n + m + k + 1; i++)
    {
        num[i] = '\0';
    }
    printElements(num, n + m + k + 1);
    printf("Count lower cases = %d\n", CountlowerCase(num, n + m + k + 1));
    printf("Count most freq char = %c\n", mostFrequency(num, n + m + k + 1));
    free(num);
    return 0;
}