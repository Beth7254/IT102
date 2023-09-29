#include <stdio.h>
#include <conio.h>
#include <windows.h>

void gotoxy(int x, int y);
void mainMenu();
int add();
void subtract();
void multiply();
void divide();
void border();

int main()
{
    system("chcp 65001 >null");
    int choice;

    gotoxy(50, 20);
    mainMenu();

    system("Color 0C");
    printf("Enter choice (1-5): ");
    scanf("%d", &choice);
    switch (choice)
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
        printf("Goobye");
        getch();
        break;
    }
}

void mainMenu()
{   gotoxy(50,20);
    system("Color 1D");
    printf("╔══════════════════════╗\n");
    printf("║      MAIN MENU       ║\n");
    printf("║══════════════════════║\n");
    printf("║ 1. Addition          ║\n");
    printf("║ 2. Subtraction       ║\n");
    printf("║ 3. Multiplication    ║\n");
    printf("║ 4. Division          ║\n");
    printf("║ 5. End Program       ║\n");
    printf("╚══════════════════════╝\n");

}

int add()
{
    system("cls");
    border();
    int num1, num2, sum;
    gotoxy(3, 1);printf("Welcome to Addition\n");
    gotoxy(2, 3);printf("Enter first num: ");
    scanf("%d", &num1);
    gotoxy(2, 4);printf("Enter second num: ");
    scanf("%d", &num2);
    sum = num1 + num2;
    gotoxy(2, 5);printf("The sum of %d and %d\n ", num1, num2);
    gotoxy(2, 6);printf("is %d\n", sum);
    printf("\n\n Try again?");
    return 0;
}
void subtract()
{
    system("cls");
    border();
    gotoxy(3,1);printf("Welcome to Subtraction\n");
    int num1, num2, diff;
    gotoxy(2,3);printf("Enter first num: ");
    scanf("%d", &num1);
    gotoxy(2, 4);printf("Enter second num: ");
    scanf("%d", &num2);
    diff = num1 - num2;
    gotoxy(2, 5);printf("The difference of %d and %d\n ", num1, num2);
    gotoxy(2, 6);printf(" is %d\n", diff);
    printf("\n\nTry again?");
}
void multiply()
{
    system("cls");
    printf("Welcome to Multiplication\n");
    int num1, num2, prod;
    printf("Enter first num: ");
    scanf("%d", &num1);
    printf("Enter second num: ");
    scanf("%d", &num2);
    prod = num1 * num2;
    printf("The product of %d and %d\nis %d", num1, num2, prod);
    printf("\nTry again?");
}
void divide()
{
    system("cls");
    printf("Welcome to Division\n");
    int num1, num2, qou;
    printf("Enter first num: ");
    scanf("%d", &num1);
    printf("Enter second num: ");
    scanf("%d", &num2);
    qou = num1 / num2;
    printf("The product of %d and %d\nis %d\n", num1, num2, qou);
    printf("\n\nTry again?");
}
void border()
{
    printf("╔══════════════════════════╗\n");
    printf("║                          ║\n");
    printf("║══════════════════════════║\n");
    printf("║                          ║\n");
    printf("║                          ║\n");
    printf("║                          ║\n");
    printf("║                          ║\n");
    printf("║                          ║\n");
    printf("╚══════════════════════════╝\n");
}

void gotoxy(int x, int y)
{
    COORD c = {x, y};
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);
}