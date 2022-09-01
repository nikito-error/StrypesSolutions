#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void VMirror(unsigned char *pImage);
void VMirror(unsigned char *pImage)
{
    unsigned char *end = pImage;
    char tmp;
    if (pImage)
    {
        while (*end)
        {
            end++;
        }
        end--;
        while (pImage < end)
        {
            tmp = *pImage;
            *pImage++ = *end;
            *end-- = tmp;
        }
    }
}
int main()
{
    for (int i = 0; i < 8; i++)
    {
        char arr[10] = "";
        int hexa_number = 0;
        unsigned num_bits = 8;
        unsigned bitmask = 1 << (num_bits - 1);
        printf("No:%d Initial content:", i + 1);
        scanf("%i", &hexa_number);

        unsigned k = 0;

        for (k = 0; k != num_bits; k++)
        {
            if (hexa_number & (bitmask >> k))
            {
                strcat(arr, "1");
            }
            else
            {
                strcat(arr, "0");
            }
        }
        VMirror((unsigned char *)arr);
        char *bin = 0, *a = 0;
        bin = arr;
        a = bin;
        int num = 0;
        do
        {
            int b = *a == '1' ? 1 : 0;
            num = (num << 1) | b;
            a++;
        } while (*a);
        if (num < 10)
        {
            printf("After vMirror 0x0%X\n", num);
        }
        else
        {
            printf("After vMirror 0x%X\n", num);
        }
    }
    return 0;
}