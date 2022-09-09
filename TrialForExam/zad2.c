#include <stdio.h>

// 0123456789
// ABCDEFGHIJ
// !#/~='\>.,
int main()
{
    int n = 500;
    char str[n];
    fgets(str, n, stdin);
    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
        {
            if (str[i] == '0')
            {
                str[i] = 'A';
            }
            else if (str[i] == '1')
            {
                str[i] = 'B';
            }
            else if (str[i] == '2')
            {
                str[i] = 'C';
            }
            else if (str[i] == '3')
            {
                str[i] = 'D';
            }
            else if (str[i] == '4')
            {
                str[i] = 'E';
            }
            else if (str[i] == '5')
            {
                str[i] = 'F';
            }
            else if (str[i] == '6')
            {
                str[i] = 'G';
            }
            else if (str[i] == '7')
            {
                str[i] = 'H';
            }
            else if (str[i] == '8')
            {
                str[i] = 'I';
            }
            else if (str[i] == '9')
            {
                str[i] = 'J';
            }
        }
        else
        {
            if (str[i] == '0')
            {
                str[i] = '!';
            }
            else if (str[i] == '1')
            {
                str[i] = '#';
            }
            else if (str[i] == '2')
            {
                str[i] = '/';
            }
            else if (str[i] == '3')
            {
                str[i] = '~';
            }
            else if (str[i] == '4')
            {
                str[i] = '=';
            }
            else if (str[i] == '5')
            {
                str[i] = '`';
            }
            else if (str[i] == '6')
            {
                str[i] = '\\';
            }
            else if (str[i] == '7')
            {
                str[i] = '>';
            }
            else if (str[i] == '8')
            {
                str[i] = '.';
            }
            else if (str[i] == '9')
            {
                str[i] = ',';
            }
        }
    }
    //10296126782646987676234
    printf("%s",str);
    return 0;
}