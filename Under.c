#include <stdio.h>
void main()
{
    int n = 1;
    do
    {
        if (n % 2 == 0)
            continue;
        printf("%d", n);
        n++;
    } while (n < 10);
}