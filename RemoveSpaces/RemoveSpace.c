#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main()
{
    int i, len = 0, j;
    char str[100];
    // printf("enter the string\n");
    scanf("%[^\n]%*c", str);
    len = sizeof(str) / sizeof(str[0]);
    for (i = 0; i < len; i++)
    {
        if (str[i] == ' ')
        {
            if (str[i + 1] == ' ')
            {
                for (j = i; j < len; j++)
                {
                    str[j] = str[j + 1];
                }
            }
            len--;
        }
    }
    printf("%s", str);
    return 0;
}