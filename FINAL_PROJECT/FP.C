#include <windows.h>
#include <stdio.h>
#include <conio.h>

void mainbox();
void login();


void patternBody()
{
    system("cls");
    int ai = 0, aj = 0;
    int bi = 0, bj = 0, bn = 5;
    int i = 0, j = 0, rows = 5, k = 0;
    int di = 0, dj = 0, dn = 5;

    printf("     PATTERN \n");
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

    getch();

    if (tryAgain())
        pattern();
    else
        returnHome();
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

void mainbox()
{
    system("cls");
    gotoxy(47, 5);
    printf("╔════════════════════════════════════════════════════════════╗\n");
    gotoxy(47, 6);
    printf("║      Hello                  ║                              ║\n");
    gotoxy(47, 7);
    printf("║      <user>                 ║                              ║\n");
    gotoxy(47, 8);
    printf("╚═════════════════════════════╝                              ║\n");
    gotoxy(47, 9);
    printf("║ 1. Pattern                  ║                              ║\n");
    gotoxy(47, 10);
    printf("║ 2. Quadratic Equation       ║                              ║\n");
    gotoxy(47, 11);
    printf("║ 3. Pascal's Triangle        ║                              ║\n");
    gotoxy(47, 12);
    printf("║ 4. Sorting                  ║                              ║\n");
    gotoxy(47, 13);
    printf("║ 5.Multiplication Table      ║                              ║\n");
    gotoxy(47, 14);
    printf("╚════════════════════════════════════════════════════════════╝\n");
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
}
