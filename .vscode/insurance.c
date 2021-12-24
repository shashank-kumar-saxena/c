#include <stdio.h>
#include <conio.h>
void main()
{
    int ins, age;
    char g, s;
    printf("Enter Your Gender(m/f): ");
    scanf("%c", &g);
    fflush(stdin);
    printf("Do you Smoke(y/n): ");
    scanf("%c", &s);
    printf("Enter your Age: ");
    scanf("%d", &age);
    if (age > 21 && age <= 30)
    {
        ins = 1000;
    }
    else if (age > 31 && age <= 40)
        ins = 1500;
    else if (age > 41 && age <= 50)
        ins = 2000;
    else if (age > 51 && age <= 60)
        ins = 4000;
    else
        printf("Insurence is not allowed");
    printf("Amount to be paid is %d\n", ins);
    if (g == 'f')
    {
        ins = ins - (ins / 10);
        printf("Amount to be paid after discount is %d\n", ins);
    }
    printf("****\n");
    if (s == 'y')
    {
        ins = ins + (ins / 10);
        printf("Amount to be paid after increment is %d\n", ins);
    }
    printf("Amount to be paid is %d", ins);
    getch();
}