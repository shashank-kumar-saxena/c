#include <stdio.h>
void main()
{
    int n;
    printf("Enter the number\n");
    scanf("%d", &n);
    if (n % 2 == 0)
        printf("The Given number is even");
    else
        printf("The Given number is odd");
}