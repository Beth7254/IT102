#include <stdio.h>
#include <conio.h>
#include <windows.h>

void gotoxy(int x, int y);
void mainMenu();

int main()
{
    system("chcp 65001 >null");
    int choice, num1, num2, result;
    char go;

    do
    {
        system("cls");
        mainMenu();

        printf("Choose an operation (1-5): ");
        scanf("%d", &choice);

        if (choice == 5)
        {
            break;
        }

        printf("Enter two numbers: ");
        scanf("%d %d", &num1, &num2);

        switch (choice)
        {
        case 1:
            result = num1 + num2;
            printf("Result: %d\n", result);
            break;

        case 2:
            result = num1 - num2;
            printf("Result: %d\n", result);
            break;

        case 3:
            result = num1 * num2;
            printf("Result: %d\n", result);
            break;

        case 4:
            result = num1 / num2;
            printf("Result: %d\n", result);
            break;

        default:
            printf("Invalid choice\n");
            break;
        }

        printf("Do you want to continue? (y/n): ");
        scanf(" %c", &go);

    } while (go == 'y');

    return 0;
}

void mainMenu()
{
    printf("╔══════════════════════╗\n");
    printf("║      MAIN MENU       ║\n");
    printf("╠══════════════════════╣\n");
    printf("║ 1. Addition          ║\n");
    printf("║ 2. Subtraction       ║\n");
    printf("║ 3. Multiplication    ║\n");
    printf("║ 4. Division          ║\n");
    printf("║ 5. End Program       ║\n");
    printf("╚══════════════════════╝\n");
}

void addition()
{
    int num1 = 0;
    int num2 = 0;
    int sum = 0;
    printf("\n WELCOME TO ADDITION \n");
    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number:");

    sum = num1 + num2;

    printf("The sum of %d and %d is %d", num1, num2, sum);
}

void subtraction()
{
    int num1 = 0;
    int num2 = 0;
    int difference = 0;
    printf("\n WELCOME TO SUBTRACTION \n");
    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number:");

    difference = num1 + num2;

    printf("The difference of %d and %d is %d", num1, num2, difference);
}

void multiplication()
{
    int num1 = 0;
    int num2 = 0;
    int product = 0;
    printf("\n WELCOME TO MULTIPLICATION \n");
    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number:");

    product = num1 + num2;

    printf("The product of %d and %d is %d", num1, num2, product);
}

void division()
{
    int num1 = 0;
    int num2 = 0;
    int product = 0;
    printf("\n WELCOME TO DIVISION \n");
    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number:");

    quotient = num1 + num2;

    printf("The quotient of %d and %d is %d", num1, num2, quotient);
}

void gotoxy(int x, int y)
{
    COORD c = {x, y};
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);
}
