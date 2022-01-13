// Sort 10 strings using sort
#include <stdio.h>
#include <string.h>
void main()
{
    char temp[20];
    char arr[3][20] = {"shashank", "kumar", "saxena"};
    for (int j = 0; j < 3 - 1; j++)
    {
        for (int i = j + 1; i < 3; i++)
        {
            if (strcmp(arr[j], arr[i]) > 0)
            {
                strcpy(temp, arr[j]);
                strcpy(arr[j], arr[i]);
                strcpy(arr[i], temp);
            }
        }
    }
    for (int i = 0; i < 3; i++)
    {
        printf("%s ", arr[i]);
    }
}