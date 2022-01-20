#include <stdio.h>
typedef struct complex
{
    int r, i;
} comp;
void inp(comp *a); // call by reference
void out(comp *a, char c);
void sum(comp *c, comp *a, comp *b);
void main()
{
    struct complex c1, c2, c3;
    inp(&c1);
    inp(&c2);
    sum(&c1, &c2, &c3);
    out(&c1, '+');
    out(&c2, '=');
    out(&c3, ' ');
}
void inp(comp *a)
{
    scanf("%d", &(a->r));
    scanf("%d", &(a->i));
}
void out(comp *a, char ch)
{

    printf("(%d + i%d) %c ", a->r, a->i, ch);
}
void sum(comp *a, comp *b, comp *c)
{
    c->r = a->r + b->r;
    c->i = a->i + b->i;
}