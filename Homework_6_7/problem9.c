#include <stdio.h>
#include <string.h>

void SPRINTF(char *szBuffer, char *szPattern, char **args);
char *function(char *str, char *substr, char *replace, char *output);

char *function(char *str, char *substr, char *replace, char *output)
{
    int i = 0, j = 0, flag = 0, start = 0;
    str[strlen(str)] = '\0';
    substr[strlen(substr)] = '\0';
    replace[strlen(replace)] = '\0';
    while (str[i] != '\0')
    {
        if (str[i] == substr[j])
        {
            if (!flag)
            {
                start = i;
            }
            j++;
            if (substr[j] == '\0')
            {
                break;
            }
            flag = 1;
        }
        else
        {
            flag = start = j = 0;
        }
        i++;
    }
    if (substr[j] == '\0' && flag)
    {
        for (i = 0; i < start; i++)
        {
            output[i] = str[i];
        }
        for (j = 0; j < strlen(replace); j++)
        {
            output[i] = replace[j];
            i++;
        }
        for (j = start + strlen(substr); j < strlen(str); j++)
        {
            output[i] = str[j];
            i++;
        }
        output[i] = '\0';
    }
    else
    {
        printf("Invalid value");
    }
    return output;
}
void SPRINTF(char *szBuffer, char *szPattern, char **args)
{
    int res = 0, br = 0;
    char p[3] = "%s";
    int N = strlen(szPattern);
    int M = strlen(p);
    for (int i = 0; i <= N - M; i++)
    {
        int j;
        for (j = 0; j < M; j++)
            if (szPattern[i + j] != p[j])
                break;

        if (j == M)
        {
            res++;
        }
    }
    for (int i = 0; i < 100; i++)
    {
        if (args[i] != NULL)
        {
            br++;
        }
        else
        {
            break;
        }
    }
    szBuffer = szPattern;
    char output[256];
    char substr[128] = "%s";
    char str[256] = "";
    char args1[128] = "";
    char *next;
    if (res == br)
    {
        for (int i = 0; i < res; i++)
        {
            if (i == 0)
            {
                strncpy(args1, args[i], sizeof(args1) - 1);
                strncpy(str, szBuffer, sizeof(str) - 1);
                next = function(str, substr, args1, output);
            }
            else
            {
                strncpy(args1, args[i], sizeof(args1) - 1);
                strncpy(str, next, sizeof(str) - 1);
                next = function(str, substr, args1, output);
            }
        }
        printf("%s", function(str, substr, args1, output));
    }
    else
    {
        printf("Invalid values or specifiers\n");
    }
}

int main()
{
    char szBuffer[100];
    const char *args[] = {"Arg1", "Arg2"};
    SPRINTF(szBuffer, (char *)"This function takes %s and %s as arguments\n", (char **)args);
    return 0;
}

/* This is not optimal solution
#include <stdio.h>
#include <string.h>

void SPRINTF(char *szBuffer, char *szPattern, char **args);

void SPRINTF(char *szBuffer, char *szPattern, char **args)
{
    int res = 0, br = 0;
    char p[3] = "%s";
    int N = strlen(szPattern);
    int M = strlen(p);
    for (int i = 0; i <= N - M; i++)
    {
        int j;
        for (j = 0; j < M; j++)
            if (szPattern[i + j] != p[j])
                break;

        if (j == M)
        {
            res++;
        }
    }
    for (int i = 0; i < 100; i++)
    {
        if (args[i] != NULL)
        {
            br++;
        }
        else
        {
            break;
        }
    }
    szBuffer = szPattern;
    if (res == br)
    {
        if (res == 1)
        {
            printf(szBuffer, args[0]);
        }
        else if (res == 2)
        {
            printf(szBuffer, args[0], args[1]);
        }
        else if (res == 3)
        {
            printf(szBuffer, args[0], args[1], args[2]);
        }
        else if (res == 4)
        {
            printf(szBuffer, args[0], args[1], args[2], args[3]);
        }
        else if (res == 5)
        {
            printf(szBuffer, args[0], args[1], args[2], args[3], args[4]);
        }
    }
    else
    {
        printf("Invalid values or specifiers\n");
    }
}

int main()
{
    char szBuffer[100];
    const char *args[] = {"Arg1", "Arg2"};
    SPRINTF(szBuffer, (char *)"This function takes %s and %s as arguments\n", (char **)args);
    return 0;
}
*/