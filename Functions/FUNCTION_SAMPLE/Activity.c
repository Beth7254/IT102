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

int num1,num2,sum,diff,prod,qou;

int main()
{
    system("chcp 65001 >null");
    int choice;
    mainMenu();
    gotoxy(47, 14);printf("Enter choice (1-5): ");
    scanf("%d", &choice);
    if (choice == 1)
    {
        add();
    }
    else if (choice == 2)
    {
        subtract();
    }
    else if (choice == 3)
    {
        multiply();
    }
    else if (choice == 4)
    {
        divide();
    }
    else
        system("cls");
}
void mainMenu()
{
    
    gotoxy(47, 5);printf("╔══════════════════════╗\n");
    gotoxy(47, 6);printf("║      MAIN MENU       ║\n");
    gotoxy(47, 7);printf("║══════════════════════║\n");
    gotoxy(47, 8);printf("║ 1. Addition          ║\n");
    gotoxy(47, 9);printf("║ 2. Subtraction       ║\n");
    gotoxy(47, 10);printf("║ 3. Multiplication    ║\n");
    gotoxy(47, 11);printf("║ 4. Division          ║\n");
    gotoxy(47, 12);printf("║ 5. End Program       ║\n");
    gotoxy(47, 13);printf("╚══════════════════════╝\n");
}
void add()
{
    char retry = 'Y';
    while (retry == 'Y' || retry == 'y')
    {
        system("cls");
        border();
        gotoxy(50, 6);printf("Welcome to Addition\n");
        userAdd();
        sum = num1 + num2;
        gotoxy(50, 10);printf("The sum of %d and %d\n", num1, num2);
        gotoxy(50, 11);printf("is %d\n", sum);
        gotoxy(53, 14);printf("Try again? (y/n)");
        retry = getch();
        while (retry != 'n' && retry != 'N' && retry != 'y' && retry != 'Y')
        {  
            gotoxy(50, 15);printf("Invalid Input.\n");
            gotoxy(47, 16);printf("Do you want to try again (y/n)? ");
            retry = getch();
        }
        if (retry == 'y' || retry == 'Y')
        {
            continue;
        }
        else if (retry == 'n' || retry == 'N')
        {
            system("cls");
            main();
        }
    }
}
void subtract()
{ 
    char retry = 'Y';
    while (retry == 'Y' || retry == 'y')
    {
        system("cls");
        border();
        gotoxy(50, 6);printf("Welcome to Subtraction\n");
        userAdd();
        diff = num1 - num2;
        gotoxy(50, 10);printf("The difference of %d and %d\n", num1, num2);
        gotoxy(50, 11);printf("is %d\n", diff);
        gotoxy(53, 14);printf("Try again? (y/n)");
        retry = getch();
        while (retry != 'n' && retry != 'N' && retry != 'y' && retry != 'Y')
        {  
            gotoxy(50, 15);printf("Invalid Input.\n");
            gotoxy(47, 16);printf("Do you want to try again (y/n)? ");
            retry = getch();
        }
        if (retry == 'y' || retry == 'Y')
        {
            continue;
        }
        else if (retry == 'n' || retry == 'N')
        {
            system("cls");
            main();
        }
    }
}
void multiply()
{
    char retry = 'Y';
    while (retry == 'Y' || retry == 'y')
    {
        system("cls");
        border();
        gotoxy(50, 6);printf("Welcome to Multiplication\n");
        userAdd();
        prod = num1 * num2;
        gotoxy(50, 10);printf("The product of %d and %d\n", num1, num2);
        gotoxy(50, 11);printf("is %d\n", prod);
        gotoxy(53, 14);printf("Try again? (y/n)");
        retry = getch();
        while (retry != 'n' && retry != 'N' && retry != 'y' && retry != 'Y')
        {  
            gotoxy(50, 15);printf("Invalid Input.\n");
            gotoxy(47, 16);printf("Do you want to try again (y/n)? ");
            retry = getch();
        }
        if (retry == 'y' || retry == 'Y')
        {
            continue;
        }
        else if (retry == 'n' || retry == 'N')
        {
            system("cls");
            main();
        }
    }
}
void divide()
{
    char retry = 'Y';
    while (retry == 'Y' || retry == 'y')
    {
        system("cls");
        border();
        gotoxy(50, 6);printf("Welcome to Division\n");
        userAdd();
        qou = num1 / num2;
        gotoxy(50, 10);printf("The qoutient of %d and %d\n", num1, num2);
        gotoxy(50, 11);printf("is %d\n", qou);
        gotoxy(53, 14);printf("Try again? (y/n)");
        retry = getch();
        while (retry != 'n' && retry != 'N' && retry != 'y' && retry != 'Y')
        {  
            gotoxy(50, 15);printf("Invalid Input.\n");
            gotoxy(47, 16);printf("Do you want to try again (y/n)? ");
            retry = getch();
        }
        if (retry == 'y' || retry == 'Y')
        {
            continue;
        }
        else if (retry == 'n' || retry == 'N')
        {
            system("cls");
            main();
        }
    }
}
void border()
{
    gotoxy(47, 5);printf("╔═══════════════════════════════╗\n");
    gotoxy(47, 6);printf("║                               ║\n");
    gotoxy(47, 7);printf("║═══════════════════════════════║\n");
    gotoxy(47, 8);printf("║                               ║\n");
    gotoxy(47, 9);printf("║                               ║\n");
    gotoxy(47, 10);printf("║                               ║\n");
    gotoxy(47, 11);printf("║                               ║\n");
    gotoxy(47, 12);printf("║                               ║\n");
    gotoxy(47, 13);printf("╚═══════════════════════════════╝\n");
}
void gotoxy(int x, int y)
{
    COORD c = {x, y};
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);
}
void userAdd()
{
    gotoxy(50, 8);printf("Enter first num: ");
    scanf("%d", &num1);
    gotoxy(50, 9);printf("Enter second num: ");
    scanf("%d", &num2);
}