#include <stdio.h>

unsigned int BinSearch(unsigned int *pArray, unsigned int uArraySize, unsigned int uValue);
void Bubble(unsigned int *pArray, unsigned int uLen);
void swap(unsigned int *xp, unsigned int *yp);

void swap(unsigned int *xp, unsigned int *yp)
{
    unsigned int temp = *xp;
    *xp = *yp;
    *yp = temp;
}
void Bubble(unsigned int *pArray, unsigned int uLen)
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
unsigned int BinSearch(unsigned int *pArray, unsigned int uArraySize, unsigned int uValue)
{
    for (int i = 0; i < uArraySize; i++)
    {
        if (pArray[i] == uValue)
        {
            return i;
        }
    }
    return 0xFFFF;
}
int main()
{
    unsigned int n, value;
    printf("Input size of array: ");
    scanf("%u", &n);
    putchar('\n');
    unsigned int arr[n];
    printf("Add elements of array:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    Bubble(arr, n);
    printf("Sorted elements of array:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%u ", arr[i]);
    }
    putchar('\n');
    printf("Find value: ");
    scanf("%u", &value);
    if (BinSearch(arr, n, value) == 65535)
    {
        printf("Value is not in array!!! \n");
    }
    else
    {
        printf("Value is at index No: %d \n", BinSearch(arr, n, value));
    }
    return 0;
}