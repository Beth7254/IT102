#include <windows.h>
#include <stdio.h>
#include <conio.h>

void mainMenu();
void pattern();
void series();
void calculator();
void endProgram();
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
                printf("     pattern");
                break;
            case 2:
                printf("     series");
                break;
            case 3:
                printf("     calculator");
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
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), BACKGROUND_BLUE);
    gotoxy(48, 10);
    printf(" >  Calculator        ");

    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), BLACK_PEN);
}

void series()
{
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), BACKGROUND_BLUE);
    gotoxy(48, 9);
    printf(" >  Fseries           ");

    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), BLACK_PEN);
}

void pattern()
{
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), BACKGROUND);
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

void gotoxy(int x, int y)
{
    COORD c = {x, y};
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);
}    