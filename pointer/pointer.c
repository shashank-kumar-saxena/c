#include <stdio.h>
int main()
{
    int a = 5, b = 6;
    int *p = &a;
    int *p2 = &b;
    int c = *p + *p2;
    printf("%d", c);
    return (0);
}