#include <stdio.h>
#include <conio.h>

void showPatterns()
{
    int ai = 0, aj = 0;
    int bi = 0, bj = 0, bn = 5;
    int i, j, rows = 5, k;
    int di = 0, dj = 0, dn = 5;
    char choice;

    do
    {
                    printf("\n╔═══════════╗\n");
                    printf("  ║ Pattern 1:║\n");
                    printf("  ╚═══════════╝\n");
        for (ai = 1; ai <= 5; ai++)
        {
            for (aj = 1; aj <= 5; aj++)
            {
                printf("* ");
            }
            printf("\n");
        }

                    printf("\n╔═══════════╗\n");
                    printf("  ║ Pattern 2:║\n");
                    printf("  ╚═══════════╝\n");
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

                    printf("\n╔═══════════╗\n");
                    printf("  ║ Pattern 3:║\n");
                    printf("  ╚═══════════╝\n");
        for (i = 1; i <= rows; i++)
        {
            for (j = 1; j <= i; j++)
            {
                printf("  ");
            }
            for (k = i; k <= rows; k++)
            {
                printf(" *"); 
            }
            printf("\n");
        }

                    printf("\n╔═══════════╗\n");
                    printf("  ║ Pattern 4:║\n");
                    printf("  ╚═══════════╝\n");
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

        printf("╔══════════════════════════════╗\n");
        printf("║Go back to Main Menu? Press M ║\n");
        printf("╚══════════════════════════════╝\n");
        scanf(" %c", &choice);

    } while (choice == 'Y' || choice == 'y');
}

void mainMenu()
{
    printf("\033[2J");
    printf("\033[H");
    printf("\033[0;32m");
    printf("╔══════════════════════╗\n");
    printf("║      MAIN MENU       ║\n");
    printf("║══════════════════════║\n");
    printf("║ 1. Shapes            ║\n");
    printf("║ 2. Fibonacci Sequence║\n");
    printf("║ 3. Simple Calculator ║\n");
    printf("║                      ║\n");
    printf("║ 4. End Program       ║\n");
    printf("╚══════════════════════╝\n");
    printf("\033[0m");
}

int main()
{
    system("chcp 65001 >null");
    int choice;

    mainMenu();

    do
    {
                    printf("\n╔══════════════════╗\n");
                    printf("  ║ Enter your choice║\n");
                    printf("  ╚══════════════════╝\n");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
                    printf("\n╔═════════════════╗\n");
                    printf("  ║Welcome to Shapes║\n");
                    printf("  ╚═════════════════╝\n");
            showPatterns();
            break;

        case 2:
        {
                    printf("\n╔══════════════════════════════╗\n");
                    printf("  ║ Welcome to Fibonacci Sequence║\n");
                    printf("  ╚══════════════════════════════╝\n");

            int n, i = 0, t1 = 0, t2 = 1, nextTerm;
            char ch = 'Y';

            while (ch == 'Y' || ch == 'y')
            {
                    printf("\n╔══════════════════╗\n");
                    printf("  ║ Enter number 1-20║\n");
                    printf("  ╚══════════════════╝\n");
                scanf("%d", &n);

                while (n > 20 || n < 1)
                {
                  printf("\n╔══════════════════════════════════╗\n");
                    printf("║ The number should be between 1-20║\n");
                    printf("╚══════════════════════════════════╝\n");
                  printf("\n╔══════════════════╗\n");
                    printf("║ Enter number 1-20║\n");
                    printf("╚══════════════════╝\n");
                    scanf("%d", &n);
                }

                    printf("\n╔════════════════╗\n");
                    printf("  ║Fibonacci Series║\n");
                    printf("  ╚════════════════╝\n");

                i = 0;
                t1 = 0;
                t2 = 1;

                while (i < n)
                {
                    printf("%d ", t1);
                    nextTerm = t1 + t2;
                    t1 = t2;
                    t2 = nextTerm;
                    i++;
                }

                    printf("\n╔══════════════╗\n");
                    printf("  ║Try again? Y/N║\n");
                    printf("  ╚══════════════╝\n");

                ch = getch();

                while (ch != 'n' && ch != 'N' && ch != 'y' && ch != 'Y')
                {
                    printf("\n╔═════════════╗\n");
                    printf("  ║Invalid Input║\n");
                    printf("  ╚═════════════╝\n");

                    printf("\n╔══════════════╗\n");
                    printf("  ║Try again? Y/N║\n");
                    printf("  ╚══════════════╝\n");
                    ch = getch();
                }

                if (ch == 'y' || ch == 'Y')
                {
                    continue;
                }

                else if (ch == 'n' || ch == 'N')
                {
                    printf("\n╔═══════════╗\n");
                    printf("  ║Program End║\n");
                    printf("  ╚═══════════╝\n");
                    break;
                }
            }
            break;
        }

        case 3:
            printf("\nWelcome to Simple Calculator.\n");
            break;

        case 4:
            printf("\nExiting program...\n");
            break;

        default:
            printf("\nInvalid choice.\n");
            break;
        }

    } while (choice != 4);

    return 0;
}