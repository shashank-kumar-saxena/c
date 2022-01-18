#include <stdio.h>
typedef struct dataOfBook
{
    char name[10];
    int page, price;
} book;
void main()
{
    int i = 0;
    book b[5];
    printf("Enter the data one by one");
    for (i = 0; i < 5; i++)
    {
        scanf("%s %d", &b[i].name, &b[i].price);
    }
    for (i = 0; i < 5; i++)
    {
        printf("%s %d\n", &b[i].name, &b[i].price);
    }
}