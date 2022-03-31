#include <stdio.h>
int main()
{
    int a = 5, b = 6;
    int *p;

    int *p2 = &b;
    p = &a;
    int c = *p + *p2;
    printf("%ud\n", p);
    printf("%d", c);
    return (0);
}