#include <stdio.h>
int npr(int, int);
void main()
{
    int n, r;
    int fact(int);
    n = 8;
    r = 2;
    printf("%d", npr(n, r));
}
int fact(int n)
{
    int f = 1;
    while (n > 0)
    {
        f = f * n;
        n--;
    }
    return (f);
}
int npr(int n, int r)
{
    return (fact(n) / (fact(r)));
}