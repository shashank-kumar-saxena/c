#include <stdio.h>
typedef struct dataOfBook
{
    char name[10];
    int age, sem;
    float marks;
} book;
void main()
{
    int i = 0;
    struct dataOfBook b[5];
    printf("Enter the data one by one");
    for (i = 0; i < 5; i++)
    {
        scanf("%s %d %d %f", &(b[i].name), &(b[i].age), &(b[i].sem), &(b[i].marks));
    }
    for (i = 0; i < 5; i++)
    {
        printf("%s %d %d %f", b[i]->name, b[i]->price, b[i]->sem, b[i]->marks);
    }
}