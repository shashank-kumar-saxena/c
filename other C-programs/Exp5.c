#include <stdio.h>
#include <ctype.h>
void main()
{
    int isPrime(int);
    int isArmStrong(int);
    int NCR();
    int NPR();
    char to_upper(char);
    char to_lower(char);
    int is_upper(char);
    int is_lower(char);
    void is_digit(char);
    int power(int, int);
    int fact(int);
    int n;
    printf("You have the given menu to check\n");
    printf("1 for prime number\n");
    printf("2 for Armstrong number\n");
    printf("3 for Combination\n");
    printf("4 for permulation\n");
    printf("5 to convert upper-case\n");
    printf("6 to convert lower-case\n");
    printf("7 to check upper-case\n");
    printf("8 to check lower-case\n");
    printf("9 to check character is digit or not\n");
    printf("10 for compute power of number\n");
    printf("11 for calculate factorial\n");
    printf("Enter your choice\n");
    scanf("%d", &n);
    int a, r;
    char ch;
    switch (n)
    {
    case 1:
        printf("Enter the number\n");
        scanf("%d", &a);
        int b = isPrime(a);
        if (b == 1)
            printf("The entered number is prime number");
        else
            printf("The entered number is not prime number");
        break;
    case 2:
        printf("Enter the 3 digit number\n");
        scanf("%d", &r);
        int k = isArmStrong(r);
        if (k == n)
        {
            printf("The Entered number is armstrong number");
        }
        else
            printf("The Entered number is not armstrong number");
        break;
    case 3:
        printf("Enter the value of n an r respectively\n");
        scanf("%d%d", &n, &r);
        printf("%d", NCR(n, r));
        break;
    case 11:
        printf("Enter the number \n");
        scanf("%d", &n);
        printf("%d", fact(n));
        break;
    case 4:
        printf("Enter the value of n an r respectively\n");
        scanf("%d%d", &n, &r);
        printf("%d", NPR(n, r));
        break;
    case 5:
        printf("Enter the character\n");
        scanf("%c", &ch);
        printf("%c", to_upper(ch));
        break;
    case 6:
        printf("Enter the character\n");
        scanf("%c", &ch);
        printf("%c", to_lower(ch));
        break;
    case 7:
        printf("Enter the character\n");
        scanf("%c", &ch);
        int st = is_upper(ch);
        break;
    case 8:
        printf("Enter the character\n");
        scanf("%c", &ch);
        int st2 = is_lower(ch);
        break;
    case 9:
        printf("Enter the any number\n");
        scanf("%c", &ch);
        is_digit(ch);
        break;
    case 10:
        printf("Enter the number and power respectivelt\n");
        scanf("%d%d", n, r);
        printf("%d", power(n, r));
    default:
        printf("Enter the valid choice");
        break;
    }
}
//Functions
int power(int n, int p)
{
    int i, store;
    for (i = 1; i <= p; i++)
    {
        store = store * p;
    }
    return (store);
}
void is_digit(char c)
{
    if (isdigit(c))
    {
        printf("The character is digit\n");
    }
    else
    {
        printf("The character is not digit");
    }
}
int is_upper(char ch)
{
    if (isupper(ch))
        return (1);
    return (0);
}
int is_lower(char ch)
{
    if (islower(ch))
        return (1);
    return (0);
}
char to_upper(char ch)
{
    return(toupper(ch)));
}
char to_lower(char ch)
{
    return(tolower(ch)));
}
int fact(int n)
{
    int f = 1;
    while (n > 0)
    {
        f = f * n;
        n--;
    }
    return (f);
}
int NPR(int n, int r)
{
    return (fact(n) / (fact(r)));
}
int NCR(int n, int r)
{
    return (fact(n) / (fact(r) * fact(n - r)));
}
int isPrime(int n)
{
    if (n > 0)
    {
        int i = 1;
        for (i = 2; i < n; i++)
        {
            if (n % i == 0)
            {
                return (0);
            }
        }
    }
    else
        return (0);
    return (1);
}
int isArmStrong(int n)
{
    int r, s = 0;
    while (n > 0)
    {
        r = n % 10;
        s = s + r * r * r;
        n /= 10;
    }
    return (s);
}