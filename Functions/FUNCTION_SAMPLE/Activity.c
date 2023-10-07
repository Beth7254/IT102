#include <stdio.h>
#include <conio.h>
#include <windows.h>

void gotoxy(int x, int y);
void mainMenu();
void add();
void subtract();
void multiply();
void divide();
void border();
void userAdd();
int menuChoice();
boolean tryAgain();
void returnHome();

int num1 = 0, num2 = 0, sum = 0, diff = 0, prod = 0, qou = 0;

int main()
{
    system("chcp 65001 >null");
    int choice;
    mainMenu();

    choice = menuChoice();

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
}

int menuChoice()
{
    int choice = 0;

    do
    {
        gotoxy(47, 14); printf("\nEnter choice (1-5): ");
        choice = getch();

        if (choice <= 48 || choice >= 54)
        {
            choice = 48;
            printf("Invalid Input.");
        }

        else
            break;

    } while (choice <= 0 || choice >= 6);

    return choice - 48;
}

boolean tryAgain()
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

void mainMenu()
{

    gotoxy(47, 5); printf("  ╔══════════════════════╗\n");
    gotoxy(47, 6); printf("  ║      MAIN MENU       ║\n");
    gotoxy(47, 7); printf("  ║══════════════════════║\n");
    gotoxy(47, 8); printf("  ║ 1. Addition          ║\n");
    gotoxy(47, 9); printf("  ║ 2. Subtraction       ║\n");
    gotoxy(47, 10); printf(" ║ 3. Multiplication    ║\n");
    gotoxy(47, 11); printf(" ║ 4. Division          ║\n");
    gotoxy(47, 12); printf(" ║ 5. End Program       ║\n");
    gotoxy(47, 13); printf(" ╚══════════════════════╝\n");
}

void add()
{
    system("cls");
    border();
    gotoxy(50, 6);
    printf("Welcome to Addition\n");
    userAdd();
    sum = num1 + num2;
    gotoxy(50, 10); printf("The sum of %d and %d\n", num1 + num2, num1, num2);
    gotoxy(50, 11); printf("is %d\n", sum);
    if (tryAgain())
        add();
    else
        returnHome();
}
void subtract()
{
    system("cls");
    border();
    gotoxy(50, 6); printf("Welcome to Subtraction\n");
    userAdd();
    diff = num1 - num2;
    gotoxy(50, 10); printf("The difference of %d and %d\n", num1 - num2, num1, num2);
    gotoxy(50, 11); printf("is %d\n", diff);

    if (tryAgain())
        subtract();
    else
        returnHome();
}
void multiply()
{
    system("cls");
    border();
    gotoxy(50, 6); printf("Welcome to Multiplication\n");
    userAdd();
    prod = num1 * num2;
    gotoxy(50, 10); printf("The product of %d and %d\n", num1 * num2, num1, num2);
    gotoxy(50, 11); printf("is %d\n", prod);
    if (tryAgain())
        multiply();
    else
        returnHome();
}
void divide()
{
    system("cls");
    border();
    gotoxy(50, 6); printf("Welcome to Division\n");
    userAdd();
    qou = num1 / num2;
    gotoxy(50, 10); printf("The qoutient of %d and %d\n", num1, num2);
    gotoxy(50, 11); printf("is %d", qou);
    if (tryAgain())
        divide();
    else
        returnHome();
}
void border()
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

void gotoxy(int x, int y)
{
    COORD c = {x, y};
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);
}

void userAdd()
{
    gotoxy(50, 8); printf("Enter first num: ");
    scanf("%d", &num1);
    gotoxy(50, 9); printf("Enter second num: ");
    scanf("%d", &num2);
}

void returnHome()
{
    system("cls");
    main();
}