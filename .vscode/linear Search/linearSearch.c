#include <stdio.h>
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