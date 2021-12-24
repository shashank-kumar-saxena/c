#include <stdio.h>
void main()
{
    void swap(int *, int *);
    int x, y;
    x = 5;
    y = 20;
    printf("x=%d,y=%d", x, y);
    swap(&x, &y);
    printf("\nValues after swap:x=%d,y=%d", x, y);
}
void swap(int *x, int *y)
{
    int z;
    z = *x;
    *x = *y;
    *y = z;
}