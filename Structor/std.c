#include <stdio.h> #include<string.h>     struct student{      	char name[10];
int age;
int sem;
float marks;
}
s[10];

int highest_mark(struct student *p, int n);
void main()
{
    int i, n;
    struct student *p;
    *p = &s;       printf("enter the value of 
n");     
   	scanf("%d",&n);      
 printf("\n enter the students details\n");  
      	   	 for(i=0;i<n;i++)  
      	 {
        printf("enter the name of student \n ", i + 1);
        fflush(stdin);
        scanf("%s", s[i].name);
        printf("enter the age of student \n");
        scanf("%d", &s[i].age);
        printf("enter the sem of the student\n");
        scanf("%d", &s[i].sem);
        printf("enter the marks of student \n", i + 1);
        scanf("%f", &s[i].marks);  
      	     }       	 
 printf("printf the student detail\n");        	  for(i=0;i<n;i++)  
      	 {
        printf("student name = %s\n", s[i].name);
        printf("student id = %d\n", s[i].age);
        printf("student sem = %d\n", s[i].sem);
        printf("student mark = %f\n", s[i].marks);  
           }  
          printf("name of student who has highest marks\n");              highest_mark(s,n);
}

int highest_mark(struct student *p, int n)
{
    char max_name[100];
    int
        max = 0,
        i;
    for (i = 0; i < n; i++)
    {
        if ((p->marks) > max)
        {
            max = p->marks;
            strcpy(max_name, p->name);
            p++;
        }
    }
    printf("name=%s\n", max_name);
    return 0;
}
