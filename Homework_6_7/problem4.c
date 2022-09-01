#include <stdio.h>
#include <stdlib.h>
void Conv(int sValue, char *pBuffer)
{
    if (sValue < 0 && sValue >= -32768)
    {
        sValue = -sValue;
        snprintf(pBuffer, sizeof(pBuffer), "-%5d", (int)sValue);
    }
    else if (sValue > 0 && sValue <= 65535)
    {
        snprintf(pBuffer, sizeof(pBuffer), " %5d", (int)sValue);
    }
    else
    {
        fprintf(stderr, "Invalid value\n");
    }
}
int main()
{
    int value;
    scanf("%d", &value);
    char f[6];
    Conv(value, f);
    printf("%s\n", f);
    return 0;
}