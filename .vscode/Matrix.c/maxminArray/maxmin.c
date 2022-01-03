#include <stdio.h>
int main()
{
    int arr[5] = {-1, 5, 3, -40, 4};
    int max = arr[0], min = arr[0];
    int i = 0;
    for (i = 0; i < 5; i++)
    {
        if (max < arr[i])
        {
            max = arr[i];
        }
        if (min > arr[i])
        {
            min = arr[i];
        }
    }
    printf("%d\n", max);
    printf("%d", min);
    return (0);
}