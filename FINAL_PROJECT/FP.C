#include <stdio.h>

void login()
{
    char username[20], password[20];
    printf("LOGIN\n");
    printf("Username: ");
    scanf("%s", username);
    printf("Password: ");
    scanf("%s", password);

    if (strcmp(username, "marybeth.gracia@dbtc-cebu.edu.ph") == 0 && strcmp(password, "Mary2004") == 0)
    {
        printf("Hello < %s >\n", username);
    }
    else
    {
        printf("Invalid username or password.\n");
    }
}

void pattern()
{
    void showPattern()
    {

        int ai = 0, aj = 0;
        int bi = 0, bj = 0, bn = 5;
        int i, j, rows = 5, k;
        int di = 0, dj = 0, dn = 5;

        gotoxy(0, 0);
        printf("Pattern #1: \n");
        for (ai = 1; ai <= 5; ai++)
        {
            for (aj = 1; aj <= 5; aj++)
            {
                printf("* ");
            }
            printf("\n");
        }

        printf("Pattern #2: \n");
        for (bi = 1; bi <= bn; bi++)
        {
            for (bj = bn; bj >= 1; bj--)
            {
                if (bi >= bj)
                {
                    printf("* ");
                }
                else
                    printf("  ");
            }
            printf("\n");
        }

        printf("Pattern #3:\n");

        for (i = 1; i <= rows; i++)
        {
            for (j = 1; j <= i; j++)
            {
                printf("  ");
            }
            for (k = i; k <= rows; k++)
            {
                printf(" *"); // print the Star
            }
            printf("\n");
        }

        printf("Pattern #4: \n");
        for (di = 1; di <= dn; di++)
        {
            for (dj = dn; dj >= 1; dj--)
            {
                if (di >= dj)
                {
                    printf("* ");
                }
                else
                    printf(" ");
            }
            printf("\n");
        }
    } // ... add the logic to display patterns
}

void quadratic_equation()
{
    // ... add the logic to display quadratic equation
}

void pascals_triangle()
{
    // ... add the logic to display pascal's triangle
}

void sorting()
{
    // ... add the logic to display sorting patterns
}

void multiplication_table()
{
    // ... add the logic to display multiplication table
}

int main()
{
    int choice;
    printf("1. LOGIN\n");
    printf("2. Pattern\n");
    printf("3. Quadratic Equation\n");
    printf("4. Pascal's Triangle\n");
    printf("5. Sorting\n");
    printf("6. Multiplication Table\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        login();
        break;
    case 2:
        pattern();
        break;
    case 3:
        quadratic_equation();
        break;
    case 4:
        pascals_triangle();
        break;
    case 5:
        sorting();
        break;
    case 6:
        multiplication_table();
        break;
    default:
        printf("Invalid choice.\n");
    }

    return 0;
}