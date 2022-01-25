// Write a program to get reverse of string using user defined function
#include <stdio.h>
int length(char str[]);
void strr(char str[], char rev[], int count);
int main()
{
    char str[100], rev[100];
    int i, j;
    printf("Enter the string\n");
    scanf("%s", str);
    printf("\nString Before Reverse: %s", str);
    strr(str, rev, length(str));
    printf("\nString After Reverse: %s", rev);
}
int length(char str[])
{
    int count = 0;
    while (str[count] != '\0')
    {
        count++;
    }
    return (count);
}
void strr(char str[], char rev[], int count)
{
    int j = count - 1, i;
    for (i = 0; i < count; i++)
    {
        rev[i] = str[j];
        j--;
    }
}