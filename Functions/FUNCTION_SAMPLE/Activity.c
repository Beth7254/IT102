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

void gotoxy(int x, int y)
{
    COORD c = {x, y};
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);
}
