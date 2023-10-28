#include <stdio.h>
#include <conio.h>
#include <windows.h>

void gotoxy(int x, int y);
void mainMenu();
void pattern();
void Fseries();
int menuChoice();
int tryAgain();
void exitProgram();
void returnHome();
void userAdd();

void mainMenucalculator();
void add();
void subtract();
void multiply();
void divide();
void userAdd();
int menuChoicecalculator();
boolean tryAgaincalculator();
void returnHomecalculator();
void mainCalculator();

int num1 = 0, num2 = 0, sum = 0, diff = 0, prod = 0; float qou = 0;



int main()
{
    system("chcp 65001 >null");
    int choice = 0;
    mainMenu();

    choice = menuChoice();

    if (choice < 1 || choice > 5)
        printf("Invalid input");
    else if (choice == 1)
        pattern();
    else if (choice == 2)
        Fseries();
    else if (choice == 3)
        mainCalculator();
    else if (choice == 4)
        exitProgram();
}

int menuChoice()
{
    int choice = 0;

    do
    {
        gotoxy(47, 14); printf("\nEnter choice (1-4): ");
        choice = getch();

        if (choice <= 48 || choice >= 54)
        {
            choice = 48;
           gotoxy(47, 14); printf("\nInvalid Input.");
        }

        else
            break;

    } while (choice <= 0 || choice >= 6);

    return choice - 48;
}

int tryAgain()
{
    char retry = ' ';
    int isTryAgain = 1;

    do
    {
        printf("Back to Home Menu? (y/n)");
        retry = getch();

        if (retry != 'n' && retry != 'N' && retry != 'y' && retry != 'Y')
            printf("Invalid input");

        else if (retry == 'y' || retry == 'Y')
        {
            isTryAgain = 0;
            break;
        }
        else
        {
            isTryAgain = 1;
            break;
        }

    } while (retry != 'n' && retry != 'N' && retry != 'y' && retry != 'Y');

    return isTryAgain;
}

void mainMenu()
{
    gotoxy(47, 5); printf("╔══════════════════════╗\n");
    gotoxy(47, 6); printf("║      MAIN MENU       ║\n");
    gotoxy(47, 7); printf("║══════════════════════║\n");
    gotoxy(47, 8); printf("║ 1. Pattern           ║\n");
    gotoxy(47, 9); printf("║ 2. Fseries           ║\n");
    gotoxy(47, 10); printf("║ 3. Calculator        ║\n");
    gotoxy(47, 11); printf("║ 4. End Program       ║\n");
    gotoxy(47, 12); printf("╚══════════════════════╝\n");
}

void pattern()
{
    system("cls");
    int ai=0, aj=0;
    int bi=0, bj=0 , bn=5;
    int i=0, j=0, rows=5, k=0;
    int di=0, dj=0,dn=5;

    printf("Pattern #1: \n");
    for(ai=1; ai<=5; ai++)
    {
        for(aj=1; aj<=5; aj++)
        {
            printf("* ");
        }
        printf("\n");
    }

    printf("Pattern #2: \n");
    for(bi=1; bi<=bn; bi++)
    {
        for(bj=bn; bj>=1; bj--)
        {
            if (bi>=bj)
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
        printf ("\n");
    }

     printf("Pattern #4: \n");
    for(di=1; di<=dn; di++)
    {
        for(dj=dn; dj>=1; dj--)
        {
            if (di>=dj)
            {
                printf("* ");
            }
            else
            printf(" ");
        }
        printf("\n");
    }
    
    if (tryAgain())
        pattern();
    else
        returnHome();
}

void Fseries()
{
    system("cls");
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
            printf("\nProgram End\n");
            break;
        }


    }
         if (tryAgain())
        pattern();
         else
        returnHome();

}


void gotoxy(int x, int y)
{
    COORD c = {x, y};
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);
}

void exitProgram()
{
    printf("\nProgram End.");
    exit(0);
}
void returnHome()
{
    system("cls");
    main();
}
void returnHomecalculator()
{
    system("cls");
    mainCalculator();
}


void userAdd()
{
    gotoxy(50, 8); printf("Enter first num: ");
    scanf("%d", &num1);
    gotoxy(50, 9); printf("Enter second num: ");
    scanf("%d", &num2);
}

int menuChoicecalculator()
{
    int choicecalculator = 0;

    do
    {
        gotoxy(47, 14); printf("\nEnter choice (1-5): ");
        choicecalculator = getch();

        if (choicecalculator <= 48 || choicecalculator >= 54)
        {
            choicecalculator = 48;
            printf("Invalid Input.");
        }

        else
            break;

    } while (choicecalculator <= 0 || choicecalculator >= 6);

    return choicecalculator - 48;
}
boolean tryAgaincalculator()
{
    char retry = ' ';
    boolean tryAgain = 0;

    do
    {
        printf("Try again? (y/n)");
        retry = getch();

        if (retry != 'n' && retry != 'N' && retry != 'y' && retry != 'Y')
            printf("Invalid input");

        else if (retry == 'y' || retry == 'Y')
        {
            tryAgain = 1;
            break;
        }

        else
        {
            tryAgain = 0;
            break;
        }

    } while (retry != 'n' && retry != 'N' && retry != 'y' && retry != 'Y');

    return tryAgain;
}
void mainCalculator()
{
    system("chcp 65001 >null");
    int choice;
    mainMenucalculator();

    choice = menuChoicecalculator();

    if (choice < 1 || choice > 5)
        printf("Invalid input");
    else if (choice == 1)
        add();
    else if (choice == 2)
        subtract();
    else if (choice == 3)
        multiply();
    else if (choice == 4)
        divide();
    else if (choice == 5)
        main();
    else
        returnHome();
        
} 

void mainMenucalculator()
{
    gotoxy(47, 5); printf("╔══════════════════════╗\n");
    gotoxy(47, 6); printf("║      MAIN MENU       ║\n");
    gotoxy(47, 7); printf("║══════════════════════║\n");
    gotoxy(47, 8); printf("║ 1. Addition          ║\n");
    gotoxy(47, 9); printf("║ 2. Subtraction       ║\n");
    gotoxy(47, 10); printf("║ 3. Multiplication    ║\n");
    gotoxy(47, 11); printf("║ 4. Division          ║\n");
    gotoxy(47, 12); printf("║ 5. Back              ║\n");
    gotoxy(47, 13); printf("╚══════════════════════╝\n");
}
void borderCalculator()
{
    gotoxy(47, 5); printf("╔═══════════════════════════════╗\n");
    gotoxy(47, 6); printf("║                               ║\n");
    gotoxy(47, 7); printf("║═══════════════════════════════║\n");
    gotoxy(47, 8); printf("║                               ║\n");
    gotoxy(47, 9); printf("║                               ║\n");
    gotoxy(47, 10); printf("║                               ║\n");
    gotoxy(47, 11); printf("║                               ║\n");
    gotoxy(47, 12); printf("║                               ║\n");
    gotoxy(47, 13); printf("╚═══════════════════════════════╝\n");
}


void add()
{
    system("cls");
    borderCalculator();
    gotoxy(50, 6);
    printf("Welcome to Addition\n");
    userAdd();
    sum = num1 + num2;
    gotoxy(50, 10); printf("The sum of %d and %d\n", num1 + num2, num1, num2);
    gotoxy(50, 11); printf("is %d\n", sum);

    if (tryAgaincalculator())
        add();
    else
        returnHomecalculator();
}

void subtract()
{
    system("cls");
    borderCalculator();
    gotoxy(50, 6); printf("Welcome to Subtraction\n");
    userAdd();
    diff = num1 - num2;
    gotoxy(50, 10); printf("The difference of %d and %d\n", num1 - num2, num1, num2);
    gotoxy(50, 11); printf("is %d\n", diff);

    if (tryAgaincalculator())
        subtract();
    else
        returnHomecalculator();
}
void multiply()
{
    system("cls");
    borderCalculator();
    gotoxy(50, 6); printf("Welcome to Multiplication\n");
    userAdd();
    prod = num1 * num2;
    gotoxy(50, 10); printf("The product of %d and %d\n", num1 * num2, num1, num2);
    gotoxy(50, 11); printf("is %d\n", prod);
    if (tryAgaincalculator())
        multiply();
    else
        returnHomecalculator();
}
void divide()
{
    system("cls");
    borderCalculator();
    gotoxy(50, 6); printf("Welcome to Division\n");
    userAdd();
    qou = num1 / num2;
    gotoxy(50, 10); printf("The qoutient of %d and %d\n", num1, num2);
    gotoxy(50, 11); printf("is %.2f", qou);
    if (tryAgaincalculator())
        divide();
    else
        returnHomecalculator();
}
