#include <stdio.h>
int main()
{
    int i, a = 0, b = 1, c, n;
    printf("Enter the limit of fibonacci series\n");
    scanf("%d", &n);
    if (n >= 2)
    {
        printf("%d,%d", a, b);
    }
    else if (n == 1)
    {
        printf("%d", a);
    }
    for (i = 1; i < n - 2; i++)
    {
        c = a + b;
        a = b;
        b = c;
        printf(",%d", c);
    }
    return 0;
}