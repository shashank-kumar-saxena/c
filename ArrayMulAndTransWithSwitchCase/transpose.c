#include <stdio.h>
#include <conio.h>
void trans(int a[3][3], int b[3][3]);
void out(int a[3][3]);
void inpu(int m[3][3]);
void main()
{
    clrscr();
    int n = 0;
    int a[3][3], b[3][3], c[3][3];
    printf("Enter the matrix\n");
    inpu(a);
    trans(a, b);
    printf("The original matrix is \n");
    out(a);
    printf("\nThe Transpose of matrix is\n");
    out(b);
}
void trans(int a[3][3], int b[3][3])
{
    int i, j;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            b[j][i] = a[i][j];
        }
    }
}
void inpu(int m[3][3])
{
    int i, j;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &m[i][j]);
        }
    }
}
void out(int a[3][3])
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
