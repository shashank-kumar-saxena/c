#include <stdio.h>
int main()
{
    int a[10] = {1, 41, 6, 3, 7, 7, 75, 3, 63, 12};
    void bubble(int[], int);
    bubble(a, 10);
}
void bubble(int a[], int size)
{
    int i, j;
    for (i = 1; i < size; i++)
    {
        for (j = 0; j < (10 - i); j++)
        {
            if (a[j] > a[j + 1])
            {
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
    for (i = 0; i < 10; i++)
    {
        printf("%d,", a[i]);
    }
}