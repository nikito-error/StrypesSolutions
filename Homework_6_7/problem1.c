#include <stdio.h>
#include <stdlib.h>
unsigned char CheckBit(unsigned int uValue)
{
    int br = 0;
    for (int i = 0; i < 15; i++)
    {
        if (!!(uValue & (1u << (i))))
        {
            br++;
        }
    }
    if (br == 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    int max = 65535;
    char str[16];
    fgets(str, sizeof(str), stdin);
    unsigned long long n = strtoull(str, 0, 16);
    if (CheckBit(n) == 1)
    {
        printf("0x01\n");
    }
    else
    {
        printf("0x00\n");
    }
    return 0;
}