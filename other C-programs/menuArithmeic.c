#include <stdio.h>
void main()
{
    int add(int, int);
    int sub(int, int);
    int mult(int, int);
    int divi(int, int);
    int a, b, c;
    printf("Enter the choice\n");
    printf("1 for Addition\n");
    printf("2 for Subtraction\n");
    printf("3 for Multiplication\n");
    printf("4 for Divide\n");
    printf("5 for exit\n");
    scanf("/n%d", &c);
    if (c >= 1 && c <= 4)
    {
        printf("Enter the two number : \n");
        scanf("%d%d", &a, &b);
        switch (c)
        {
        case 1:
            printf("%d", add(a, b));
            break;
        case 2:
            printf("%d", sub(a, b));
            break;
        case 3:
            printf("%d", mult(a, b));
            break;
        case 4:
            printf("%d", divi(a, b));
            break;
        default:
            break;
        }
    }
    else
    {
        if (c == 5)
            printf("Exit");
        printf("Enter the valid choice");
    }
}
int add(int a, int b)
{
    return (a + b);
}
int sub(int a, int b)
{
    return (a - b);
}
int mult(int a, int b)
{
    return (a * b);
}
int divi(int a, int b)
{
    return (a / b);
}