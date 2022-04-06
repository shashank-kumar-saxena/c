#include <stdio.h>
void main()
{
    FILE *fp;
    fp = fopen("db.txt", "a");
    if (fp != NULL)
    {
        fprintf(fp, "Hello\n");
        fclose(fp);
    }
}