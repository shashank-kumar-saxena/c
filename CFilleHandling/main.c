#include <stdio.h>
#include <string.h>
void main()
{
    while (1)
    {
        int n;
        printf("\nEnter your choice\n");
        printf("1  for add student \n");
        printf("2 for retrieve student\n");
        printf("3 for delete student\n");
        printf("4 for exit\n");
        scanf("%d", &n);
        if (n == 4)
        {
            break;
        }
        typedef struct student
        {
            char name[10];
            int rollno;
            float marks;
        } std;
        FILE *fp;
        switch (n)
        {
        case 1:

            std s;
            printf("Enter the name of student\n");
            scanf("%s", &s.name);
            printf("Enter the rollno of student\n");
            scanf("%d", &s.rollno);
            printf("Enter the marks obtain\n");
            scanf("%f", &s.marks);

            fp = fopen("db.txt", "a");
            if (fp != NULL)
            {
                fprintf(fp, "%s\t%d\t%f\n", s.name, s.rollno, s.marks);
            }
            fclose(fp);
            break;
        case 2:
            fp = fopen("db.txt", "r");
            char n1[100] = "shashank";
            if (fp != NULL)
            {
                printf("Enter the name of student");
                scanf("%s", n1);
                int n2 = 1;
                int b[100];
                while (fscanf(fp, "%s %s", &b) == 1)
                {
                    if (strcmp(b, n1) == 0 && n2 <= 3)
                    {
                        n2++;
                        printf("%s ", b);
                    }
                    // fscanf(fp, "%s %s %s", &n1, &n2, &n3);
                    // printf("%s %s %s\n", n1, n2, n3);
                }
            }
            fclose(fp);
            break;
        case 3:
            FILE *fp2;
            fp2 = fopen("db2.txt", 'w');
            fp = fopen("db.txt", "r");
            int nm[100];
            int n3 = 0;
            printf("Enter the name you want to delete\n");
            scanf("%d", &roll);
            char b2[100];
            if (fp != NULL)
            {
                while (fscanf("%s", b2) == 1)
                {
                    if (strcmp(b2, nm) != 0 && n3 >= 3)
                    {
                        fprintf(fp2, "%s", b2);
                    }
                }
                fclose(fp);
                fclose(fp2);
            }
            break;
        default:
            printf("\nEnter the valid choice");
        }
    }
}