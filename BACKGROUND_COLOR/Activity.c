#include <windows.h> //control smd
#include <stdio.h>   //standard i/o
#include <conio.h>   //console i/o

void mainMenu();   // shows the menu
void pattern();    // selects the pattern option
void series();     // selects the series option
void calculator(); // selects the calculator
void endProgram(); // terminates the program
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
                printf("     PATTERN");
                break;
            case 2:
                printf("     SERIES");
                break;
            case 3:
                printf("     CALCULATOR");
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
            SERIES();
            break;
        case 3:
            CALCULATORr();
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
    printf(" >  END PROGRAM       ");
    
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), BLACK_PEN);
}

void calculator()
{
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), BACKGROUND_BLUE);
    gotoxy(48, 10);
    printf(" >  CALCULATOR        ");

    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), BLACK_PEN);
}

void series()
{
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), BACKGROUND_BLUE);
    gotoxy(48, 9);
    printf(" >  FSERIES           ");

    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), BLACK_PEN);
}

void pattern()
{
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), BACKGROUND_BLUE);
    gotoxy(48, 8);
    printf(" >  PATTERN           ");

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
    printf("║ 1. PATTERN           ║\n");
    gotoxy(47, 9);
    printf("║ 2. FSERIES           ║\n");
    gotoxy(47, 10);
    printf("║ 3. CALCULATOR        ║\n");
    gotoxy(47, 11);
    printf("║ 4. END PROGRAM       ║\n");
    gotoxy(47, 12);
    printf("╚══════════════════════╝\n");
}

void gotoxy(int x, int y)
{
    COORD c = {x, y};

    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);
}