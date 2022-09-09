#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "zad1.h"
// main class
// gcc zad1.c zad1funcs.c -o zad1
//./zad1
double findRandom(double min, double max)
{
    return min + (double)rand() / (RAND_MAX / (max - min));
}
int main()
{
    srand(time(NULL));
    int n, m;
    printf("Enter n:");
    scanf("%d", &n);
    double *num = (double *)malloc(n * sizeof(double));
    if (NULL == num)
    {
        fprintf(stderr, "malloc error!");
        return 1;
    }
    for (int i = 0; i < n; i++)
    {
        num[i] = findRandom(1.0, 10.0);
    }
    printf("Enter m:");
    scanf("%d", &m);
    num = (double *)realloc(num, (n + m) * sizeof(double));
    if (NULL == num)
    {
        fprintf(stderr, "realloc error!");
        return 1;
    }
    for (int i = n; i < n + m; i++)
    {
        num[i] = findRandom(10.0, 20.0);
    }
    printf("Aray of elements:\n");
    for (int i = 0; i < n + m; i++)
    {
        printf("%.2lf ", num[i]);
    }
    putchar('\n');
    printf("Sum = %.2lf\n", sumOfArray(num, n + m));
    printf("Max Number of Array = %.2lf\n", maxNumber(num, n + m));
    printf("Average sum = %.2lf\n", average(num, n + m));
    free(num);
}