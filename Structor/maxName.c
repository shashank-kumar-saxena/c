#include <stdio.h>
typedef struct dataOfBook
{
    char name[10];
    int age;
    int sem;
    float marks;
} book;
void main()
{
    int i = 0;
    struct dataOfBook b[3];
    printf("Enter the data one by one\n");
    for (i = 0; i < 3; i++)
    {
        scanf("%s", b[i].name);
        scanf("%d", b[i].age);
        scanf("%d", b[i].sem);
        scanf("%f", b[i].marks);
    }
    for (i = 0; i < 5; i++)
    {
        printf("%s %d %d %f", b[i].name, b[i].age, b[i].sem, b[i].marks);
    }
}