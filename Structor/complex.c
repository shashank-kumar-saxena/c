#include <stdio.h>
typedef struct complex
{
    int r, i;
} comp;
void inp(comp *a); // call by value
void out(comp *a);
void sum(comp *c, comp *a, comp *b);
void main()
{
    struct complex c1, c2, c3;
    // or comp c1,c2,c3;+
    c1.i = 3;
    c1.r = 4;
    c2.i = 4;
    c2.r = 3;
    inp(&c1);
    inp(&c3);
    sum(&c1, &c2, &c3);
    out(&c1);
    out(&c2);
    out(&c3);
}
void inp(comp *a)
{
    scanf("%d", &(a->i));
    scanf("%d", &(a->r));
}
void out(comp *a)
{

    printf("(%d + i%d) ", a->r, a->i);
}
void sum(comp *a, comp *b, comp *c)
{
    c->r = a->r + b->r;
    c->i = a->i + b->i;
}