#include <stdio.h>
void main()
{
    int a[5];
    void inp(int b[], int);
    void out(int b[], int);
    inp(a, 5);
    out(a, 5);
}
void inp(int b[5], int size)
{
    int i = 0;
    for (i = 0; i < size; i++)
    {
        scanf("%d", &b[i]);
    }
}
void out(int b[5], int size)
{
    int i = 0;
    for (i = 0; i < size; i++)
    {
        printf("%d", b[i]);
    }
}