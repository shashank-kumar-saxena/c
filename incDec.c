#include <stdio.h>
void main()
{

    int i = 10, j = 6, k;
    k = i++ + j++ + --j + ++j;
    printf("%d", k);
}