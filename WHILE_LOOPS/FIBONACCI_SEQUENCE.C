#include <stdio.h>
#include <conio.h>

int main()
{
    int n, i = 0, t1 = 0, t2 = 1, nextTerm;
    char ch = 'Y';

    while (ch == 'Y' || ch == 'y')
    {
        printf("\nEnter number (1-20): ");
        scanf("%d", &n);

        while (n > 20 || n < 1)
        {
            printf("The number should not exceed (1-20).\n");
            printf("Enter number (1-20): ");
            scanf("%d", &n);
        }

        printf("Fibonacci Series: ");

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
            continue;
        }

        printf("\nDo you want to try again (y/n)? ");

        ch = getch();

        
        while (ch != 'n' && ch != 'N' && ch != 'y' && ch != 'Y')
        {
            printf("\n Invalid Input.");
            printf("\nDo you want to try again (y/n)? ");
            ch = getch();
        }

        if (ch == 'y' || ch == 'Y')
        {
            continue;
        }

        else if (ch == 'n' || ch == 'N')
        {
            printf("\nProgram End");
            break;
        }

        return 0;
    }
}