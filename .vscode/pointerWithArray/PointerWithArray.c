#include <stdio.h>
#include <string.h>
void main()
{
    int len(char *);
    char c[10] = "Shashank";

    printf("%d", len(c));
}
int len(char *p)
{
    int i = 0;
    for (i = 0; *(p + i) != '\0'; i++)
        ;
    return (i);
}