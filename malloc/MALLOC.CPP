#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
void main()
{
 char *mem_alloc;
 if(mem_alloc==NULL)
 {
  printf("Couldn't able to allocate requested memory \n");
 }
 else
 {
  strcpy(mem_alloc,"Shashank");
 }
 printf("synamically allocated memory content : %s \n",mem_alloc);
 free(mem_alloc);
 getch();
 }