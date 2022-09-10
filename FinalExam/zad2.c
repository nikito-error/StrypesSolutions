#include <stdio.h>
unsigned sumArrayDigits(const int *arr, size_t n)
{
    unsigned sum = 0, p = 0;
    for (int i = 0; i < n; i++)
    {
        unsigned t = arr[i];
        while (t != 0)
        {
            p = t % 10;
            sum = sum + p;
            t = t / 10;
        }
    }
    return sum;
}
int main()
{
    int arr[] = {12, 34, 5, 70};
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("Sum of digits = %d\n", sumArrayDigits(arr, n));
    return 0;
}