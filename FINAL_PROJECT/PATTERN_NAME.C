#include <stdio.h>
#include <string.h>

void print_pattern(char *name)
{
    int len = strlen(name);
    for (int i = 0; i < len; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("%c", name[j]);
        }
        printf("\n");
    }
}

int main()
{
    char name[] = "MARYBETHGRACIA";
    print_pattern(name);
    return 0;
}
