#include <windows.h>
#include <stdio.h>
#include <conio.h>

void mainMenu();
void pattern();
void series();
void calculator();
void endProgram();
void showPattern();
void showSeries();

void showCalculator();
void add();
void colorAdd(); // shows the ui color background
void subtract();
void colorSubtract(); // shows the ui color background
void multiply();
void colorMultiply(); // shows the ui color background
void divide();
void colorDivide(); // shows the ui color background
void colorExit();
void mainMenucalculator();

boolean tryAgaincalculator();
void borderCalculator();
void userAdd();
void back();

void returnHomecalculator();
int num1 = 0, num2 = 0, sum = 0, diff = 0, prod = 0;
float qou = 0;
void gotoxy(int x, int y);

void main()
{
    int choice = 0;
    int index = 1;
    system("chcp 65001 >null");
    system("cls");
    mainMenu();
    pattern();
    while (1) // up-H | right-M | down-P | left-K
    {
        choice = getch();

        switch (choice)
        {
        case 80:
            if (index >= 4)
                index = 4;
            else
                index++;
            break;

        case 72:
            if (index <= 1)
                index = 1;
            else
                index--;
            break;

        case 13:
            switch (index)
            {
            case 1:
                system("cls");
                showPattern();
                getch();
                system("cls");
                break;
            case 2:
                showSeries();
                break;
            case 3:
                showCalculator();
                break;
            case 4:
                exit(0);
                break;
            }
            break;
        }

        mainMenu();

        switch (index)
        {
        case 1:
            pattern();
            break;
        case 2:
            series();
            break;
        case 3:
            calculator();
            break;
        case 4:
            endProgram();
            break;
        }
    }
}

void endProgram()
{
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), BACKGROUND_RED);
    gotoxy(48, 11);
    printf(" >  End Program       ");

    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), BLACK_PEN);
}

void calculator()
{
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), BACKGROUND_GREEN);
    gotoxy(48, 10);
    printf(" >  Calculator        ");

    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), BLACK_PEN);
}

void series()
{
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), BACKGROUND_GREEN);
    gotoxy(48, 9);
    printf(" >  Fseries           ");

    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), BLACK_PEN);
}

void pattern()
{
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), BACKGROUND_GREEN);
    gotoxy(48, 8);
    printf(" >  Pattern           ");

    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), BLACK_PEN);
}

void mainMenu()
{
    gotoxy(47, 5);
    printf("╔══════════════════════╗\n");
    gotoxy(47, 6);
    printf("║      MAIN MENU       ║\n");
    gotoxy(47, 7);
    printf("║══════════════════════║\n");
    gotoxy(47, 8);
    printf("║ 1. Pattern           ║\n");
    gotoxy(47, 9);
    printf("║ 2. Fseries           ║\n");
    gotoxy(47, 10);
    printf("║ 3. Calculator        ║\n");
    gotoxy(47, 11);
    printf("║ 4. End Program       ║\n");
    gotoxy(47, 12);
    printf("╚══════════════════════╝\n");
}

void showPattern()
{

    int ai = 0, aj = 0;
    int bi = 0, bj = 0, bn = 5;
    int i, j, rows = 5, k;
    int di = 0, dj = 0, dn = 5;

    gotoxy(0,0);
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
}

void showSeries()
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
            system("cls");
            continue;
        }

        else if (ch == 'n' || ch == 'N')
        {
            system("cls");
            break;
        }
    }
}
void showCalculator()
{
    int choicecalculator = 0;
    int indexcalculator = 1;
    system("chcp 65001 >null");
    system("cls");
    mainMenucalculator();
    colorAdd();
    while (1) // up-H | right-M | down-P | left-K
    {
        choicecalculator = getch();

        switch (choicecalculator)
        {
        case 80:
            if (indexcalculator >= 5)
                indexcalculator = 5;
            else
                indexcalculator++;
            break;

        case 72:
            if (indexcalculator <= 1)
                indexcalculator = 1;
            else
                indexcalculator--;
            break;

        case 13:
            switch (indexcalculator)
            {
            case 1:
                add();
                break;
            case 2:
                subtract();
                break;
            case 3:
                multiply();
                break;
            case 4:
                divide();
                break;
            case 5:
                exit (0);
                break; 
            }
            break;
        }

        showCalculator();

        switch (indexcalculator)
        {
        case 1:
            colorAdd();
            break;
        case 2:
            colorSubtract();
            break;
        case 3:
            colorMultiply();
            break;
        case 4:
            colorDivide();
            break;
        case 5:
            colorExit();
            break;
        }
    }
}
void back()
{
    system("cls");
    returnHomecalculator();
}
void returnHomecalculator()
{
    system("cls");
    showCalculator();
}
void userAdd()
{
    gotoxy(50, 8);
    printf("Enter first num: ");
    scanf("%d", &num1);
    gotoxy(50, 9);
    printf("Enter second num: ");
    scanf("%d", &num2);
}
void calculatorMenu()
{
    gotoxy(47, 5);
    printf("╔══════════════════════╗\n");
    gotoxy(47, 6);
    printf("║      MAIN MENU       ║\n");
    gotoxy(47, 7);
    printf("║══════════════════════║\n");
    gotoxy(47, 8);
    printf("║ 1. Addition          ║\n");
    gotoxy(47, 9);
    printf("║ 2. Subtraction       ║\n");
    gotoxy(47, 10);
    printf("║ 3. Multiplication    ║\n");
    gotoxy(47, 11);
    printf("║ 4. Division          ║\n");
    gotoxy(47, 12);
    printf("║ 5. End Program       ║\n");
    gotoxy(47, 13);
    printf("╚══════════════════════╝\n");
}

boolean tryAgaincalculator()
{
    char retry = ' ';
    boolean isTryAgain = 1;

    do
    {
        printf("Try again? (y/n)");
        retry = getch();

        if (retry != 'n' && retry != 'N' && retry != 'y' && retry != 'Y')
            printf("Invalid input");

        else if (retry == 'y' || retry == 'Y')
        {
            isTryAgain = 1;
            break;
        }

        else
        {
            isTryAgain = 0;
            break;
        }

    } while (retry != 'n' && retry != 'N' && retry != 'y' && retry != 'Y');

    return isTryAgain;
}

void borderCalculator()
{
    gotoxy(47, 5);
    printf("╔═══════════════════════════════╗\n");
    gotoxy(47, 6);
    printf("║                               ║\n");
    gotoxy(47, 7);
    printf("║═══════════════════════════════║\n");
    gotoxy(47, 8);
    printf("║                               ║\n");
    gotoxy(47, 9);
    printf("║                               ║\n");
    gotoxy(47, 10);
    printf("║                               ║\n");
    gotoxy(47, 11);
    printf("║                               ║\n");
    gotoxy(47, 12);
    printf("║                               ║\n");
    gotoxy(47, 13);
    printf("╚═══════════════════════════════╝\n");
}
void mainMenucalculator()
{
    gotoxy(47, 5);
    printf("╔════════════════════════════╗\n");
    gotoxy(47, 6);
    printf("║   WELCOME TO CALCULATOR    ║\n");
    gotoxy(47, 7);
    printf("║════════════════════════════║\n");
    gotoxy(47, 8);
    printf("║ 1. Addition                ║\n");
    gotoxy(47, 9);
    printf("║ 2. Subtraction             ║\n");
    gotoxy(47, 10);
    printf("║ 3. Multiplication          ║\n");
    gotoxy(47, 11);
    printf("║ 4. Division                ║\n");
    gotoxy(47, 12);
    printf("║ 5. Back                    ║\n");
    gotoxy(47, 13);
    printf("╚════════════════════════════╝\n");
}
void add()
{
    system("cls");
    borderCalculator();
    gotoxy(50, 6);
    printf("Welcome to Addition\n");
    userAdd();
    sum = num1 + num2;
    gotoxy(50, 10);
    printf("The sum of %d and %d\n", num1, num2);
    gotoxy(50, 11);
    printf("is %d\n", sum);

    if (tryAgaincalculator())
        add();
    else
        returnHomecalculator();
}
void subtract()
{
    system("cls");
    borderCalculator();
    gotoxy(50, 6);
    printf("Welcome to Subtraction\n");
    userAdd();
    diff = num1 - num2;
    gotoxy(50, 10);
    printf("The difference of %d and %d\n", num1, num2);
    gotoxy(50, 11);
    printf("is %d\n", diff);

    if (tryAgaincalculator())
        subtract();
    else
        returnHomecalculator();
}
void multiply()
{
    system("cls");
    borderCalculator();
    gotoxy(50, 6);
    printf("Welcome to Multiplication\n");
    userAdd();
    prod = num1 * num2;
    gotoxy(50, 10);
    printf("The product of %d and %d\n", num1, num2);
    gotoxy(50, 11);
    printf("is %d\n", prod);
    if (tryAgaincalculator())
        multiply();
    else
        returnHomecalculator();
}
void divide()
{
    system("cls");
    borderCalculator();
    gotoxy(50, 6);
    printf("Welcome to Division\n");
    userAdd();
    qou = num1 / num2;
    gotoxy(50, 10);
    printf("The qoutient of %d and %d\n", num1, num2);
    gotoxy(50, 11);
    printf("is %.2f", qou);
    if (tryAgaincalculator())
        divide();
    else
        returnHomecalculator();
}

void colorAdd()
{
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), BACKGROUND_GREEN);
    gotoxy(47, 8);
    printf(" > Addition                  \n");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), BLACK_PEN);
}
void colorSubtract()
{
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), BACKGROUND_GREEN);
    gotoxy(47, 9);
    printf(" > Subtraction               \n");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), BLACK_PEN);
}
void colorMultiply()
{
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), BACKGROUND_GREEN);
    gotoxy(47, 10);
    printf(" > Multiplication            \n");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), BLACK_PEN);
}
void colorDivide()
{
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), BACKGROUND_GREEN);
    gotoxy(47, 11);
    printf(" > Division                  \n");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), BLACK_PEN);
}
void colorExit()
{
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), BACKGROUND_GREEN);
    gotoxy(47, 12);
    printf(" > Division                  \n");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), BLACK_PEN);
}

void gotoxy(int x, int y)
{
    COORD c = {x, y};
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);
}