#include<stdio.h>
#include<conio.h>
void main()
{
 int n,i,min,max,s;
 int a[]={2,3,4,5,6,87,6,2,1,3,656,57,44};
 clrscr();
 while(1)
 {
  printf("\n1 for find minimum of array\n");
 printf("2 for find maximum of array\n");
  printf("3 for sum of all element of array\n");
  printf("4 for display of array\n");
  printf("5 for exit\n");
  scanf("%d",&n);
  if(n==5)
  {
   break;
  }
  switch(n)
  {
   case 1:
    min=a[i];
     for(i=0;i<8;i++)
     {
      if(min>a[i])
       min=a[i];
     }
     printf("The minimum element of array is %d",min);
   break;
   case 2:
   max=a[0];
     for(i=0;i<8;i++)
     {
      if(max<a[i])
       max=a[i];
     }
     printf("The maximum element of array is %d",max);
   break;
   case 3:
     s=0;
     for(i=0;i<8;i++)
     {
      s=s+a[i];
     }
     printf("The sum of element of array is %d",s);
   break;
   case 4:
       printf("The element of array are \n");
       for(i=0;i<8;i++)
       {
	printf("%d ",a[i]);
       }
   break;
   default:
   printf("\nEnter the valid choice");
  }
 }
}