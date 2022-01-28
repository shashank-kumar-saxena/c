// swap using pointer
#include <stdio.h>
void inp(int *a, int *b);
void main()
{
    int a, b;
    scanf("%d%d", &a, &b);
    inp(&a, &b);
    printf("%d%d\n", a, b);
    printf("%d%d", a, b);
}
void inp(int *a, int *b)
{
    int c = *a;
    *a = *b;
    *b = c;
}

// Fab nth term
int fib(int n)
{
    if (n <= 1)
    {
        return n;
    }

    return fib(n - 1) + fib(n - 2);
}

int main()
{
    int n = 8;

    printf("F(n) = %d", fib(n));

    return 0;
}

// fab series using recursion
void fibo(int n)
{
    static int n1 = 0, n2 = 1, n3;
    if (n > 0)
    {
        n3 = n1 + n2;
        n1 = n2;
        n2 = n3;
        printf(" %d", n3);
        fibo(n - 1);
    }
}
void main()
{
    int n;
    printf("Enter the value of n:");
    scanf("%d", &n);
    printf("Fibonacci series: 0 1 ");
    fibo(n - 2);
}

// factorial
int fibo(int n)
{
    if (n == 0)
        return 1;
    else
        return (n * fibo(n - 1));
}
void main()
{
    int n = 5;
    printf("%d", fibo(n));
}

// BubbleSort

int main()
{
    int a[10] = {1, 41, 6, 3, 7, 7, 75, 3, 63, 12};
    void bubble(int[], int);
    bubble(a, 10);
}
void bubble(int a[], int size)
{
    int i, j, flag = 1;
    for (i = 1; i < size && flag; i++)
    {
        flag = 0;
        for (j = 0; j < (10 - i); j++)
        {
            if (a[j] > a[j + 1])
            {
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
                flag = 1;
            }
        }
    }
    for (i = 0; i < 10; i++)
    {
        printf("%d,", a[i]);
    }
}

// Linear Search
int main()
{
    int linear(int[], int, int);
    int i, n, flag = 0;
    int a[10] = {1, 4, 2, 6, 5, 3, 8, 6, 7, 10};
    printf("Enter the element you want to search\n");
    scanf("%d", &n);
    flag = linear(a, n, 10);
    if (flag == 0)
        printf("Element not found");
    else
        printf("Element found at %d location", flag);
    return (0);
}

int linear(int a[], int item, int size)
{
    int i = 0;
    for (i = 0; i < 10; i++)
    {
        if (item == a[i])
        {
            return (i);
        }
    }
    return (0);
}
// Multiplication of two matrix

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