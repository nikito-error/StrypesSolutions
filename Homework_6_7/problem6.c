#include <stdio.h>

void Bubble(int *pArray, unsigned int uLen);
void swap(int *xp, int *yp);
void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}
void Bubble(int *pArray, unsigned int uLen)
{
    int i, j;
    for (i = 0; i < uLen - 1; i++)
    {
        for (j = 0; j < uLen - i - 1; j++)
        {
            if (pArray[j] > pArray[j + 1])
            {
                swap(&pArray[j], &pArray[j + 1]);
            }
        }
    }
}
int main()
{
    unsigned int n;
    printf("Input size of array: ");
    scanf("%u", &n);
    putchar('\n');
    int arr[n];
    printf("Add elements of array:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    Bubble(arr, n);
    printf("Bubble sorted Array:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}