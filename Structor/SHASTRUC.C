#include<stdio.h>
#include<conio.h>
typedef struct abc
{
int data;
}node;
void main()
{
 node a[10];
 int i=0;
 clrscr();
 for(i=0;i<10;i++)
 {
  scanf("%d",&a[i].data);
 }
 printf("The elements are ");
 for(i=0;i<10;i++)
 {
  printf("%d ",a[i].data);
 }
 getch();
}