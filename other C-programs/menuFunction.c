#include <stdio.h>
int fact(int a);
int pow(int a, int b);
int sum(int a);
int main()
{
    int choice, a, b, c;
    printf(" Factorial, Power & Sum of digits \n");
    printf("*************\n");
    printf("1- Factorial\n");
    printf("2- Power\n");
    printf("3- Sum of digits\n");
    printf("4- Exit\n");
    printf("Enter Your Choice = ");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
        scanf("%d", &a);
        c = fact(a);
        printf("Factorial of %d is %d", a, c);
        break;
    case 2:
        scanf("%d %d", &a, &b);
        c = pow(a, b);
        printf("Power of %d to %d is %d", a, b, c);
        break;
    case 3:
        scanf("%d", &a);
        c = sum(a);
        printf("Sum of digit of %d is %d", a, c);
        break;
    case 4:
        exit(0);
        break;
    }
    return (0);
}
int fact(int a)
{
    int i, s = 1;
    for (i = 1; i <= a; i++)
    {
        s = s * i;
    }
    return s;
}
int pow(int a, int b)
{
    int i, c = 1;
    for (i = 1; i <= b; i++)
    {
        c = c * a;
    }
    return c;
}
int sum(int a)
{
    int r, s = 0;
    while (a > 0)
    {
        r = a % 10;
        s = s + r;
        a = a / 10;
    }
    return s;
}