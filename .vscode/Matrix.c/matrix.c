#include <stdio.h>
int main()
{
    int a[3][3], b[3], c[3][3];
    void inp(int[3][3], int);
    void operat(int[3][3], int[3][3], int[3][3]);
    void out(int[3][3], int);
    inp(a, 1);
    inp(b, 2);
    operat(a, b, c);
    out(c, 3);
    return (0);
}
void inp(int a[3][3], int n)
{
    int i, j;
    printf("Enter the %d matrix element one by one\n", n);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
}
void operat(int a[3][3], int b[3][3], int c[3][3])
{
    int i, j, k;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 3; k++)
            {
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }
}

void out(int a[3][3], int n)
{
    int i, j;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
}