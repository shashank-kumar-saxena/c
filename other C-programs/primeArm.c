#include <stdio.h>
int main()
{
    int num, i, remainder, originalNum, result, flag = 0;
    printf("Enter number\n");
    scanf("%d", &num);
    int ch;
    printf("1. Prime Number\n");
    printf("2. Armstrong\n");
    printf("3. exit");
    printf("Enter your choice\n");
    scanf("%d", &ch);
    switch (ch)
    {
    case 1:
        for (i = 2; i <= num / 2; ++i)
        {
            if (num % i == 0)
            {
                flag = 1;
                break;
            }
        }
        if (num == 1)
        {
            printf("1 is neither prime nor composite.");
        }
        else
        {
            if (flag == 0)
                printf("%d is a prime number.", num);
            else
                printf("%d is not a prime number.", num);
        }
        break;
    case 2:
        while (originalNum != 0)
        {
            remainder = originalNum % 10;
            result += remainder * remainder * remainder;
            originalNum /= 10;
        }
        if (result == num)
            printf("%d is an Armstrong number.", num);
        else
            printf("%d is not an Armstrong number.", num);
        break;
    default:
        printf("Error\n");
    }
}