/*
Strlen
Strcpy
Strcat
Strrev
Strcmp
Strlwr
Strstr
Strncpy
Strncat
Strncmp
*/
#include <stdio.h>
#include <string.h>
void main()
{
    char c[10] = "Shashank";
    char c2[10] = "Saxena";
    char cp[10];
    strcpy(cp, c);
    printf("Length of String %d\n", strlen(c2));
    printf("Cpoy of the string %s\n", cp);
    printf("concatenate Function %s\n", strcat(c, c2));
    printf("Reverse String function %s\n", strrev(cp));
    printf("lowerCase Function%s\n", strlwr(c));
}