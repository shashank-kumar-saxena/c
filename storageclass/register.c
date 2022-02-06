#include <stdio.h>
void fun();
void main()
{
    fun();
    fun();
    fun();
}
void fun()
{
    int x = 1;
    register int y = 1;
    x++;
    y++;
    // printf("y=%d\n", &y);//create error because x's in register not in memory
    printf("x=%d\n", &x);
    printf("x=%d\n", y);
}