#include<stdio.h>
#include<conio.h>
void inpu(int m[3][3]);
void cal(int a[3][3],int b[3][3],int c[3][3]);
void trans(int a[3][3],int b[3][3]);
void out(int a[3][3]);
void main()
{
clrscr();
while(1)
{
 int n=0;
 int a[3][3],b[3][3],c[3][3];
 printf("Enter your choice\n");
 printf("1 for mlutipilcation\n");
 printf("2 for Transpose\n");
 printf("3 for exit\n");
 printf("Enter your choice\n");
 scanf("%d",&n);
 if(n==3)
  break;
 switch(n)
 {
   case 1:
	printf("Enter the first matrix\n");
	inpu(a);
	printf("Enter the second matrix\n");
	inpu(b);
	cal(a,b,c);
	printf("The Result matrix is\n");
	out(c);
	break;
   case 2:
	printf("Enter the matrix\n");
	inpu(a);
	trans(a,b);
	printf("The original matrix is \n");
	out(a);
	printf("\nThe Transpose of matrix is\n");
	out(b);
   break;
   default:
   printf("Enter the valid choice\n");
 }
}
getch();
}
void trans(int a[3][3],int b[3][3])
{
 int i,j;
 for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
b[j][i]=a[i][j];
}
}
}
void inpu(int m[3][3])
{
int i,j;
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
scanf("%d",&m[i][j]);
}
}
}
void out(int a[3][3])
{
int i,j;
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
	printf("%d ",a[i][j]);
}
printf("\n");
}
}
void cal(int a[3][3],int b[3][3],int c[3][3])
{
 int i,j,k;
 for(i=0;i<3;i++)
 {
 for(j=0;j<3;j++)
 {
 c[i][j]=0;
 for(k=0;k<3;k++)
 {
 c[i][j]+=a[i][k]*b[k][j];
 }
 }
 }
}