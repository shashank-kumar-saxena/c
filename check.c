#include <stdio.h>
void fun(float a, float b)
{
    printf("%f\n", a * b);
}
void main()
{
    fun(10, 2);
    fun(9, 2);
    fun(4.5, 1.5);
    fun(2.0, 3.0);
}