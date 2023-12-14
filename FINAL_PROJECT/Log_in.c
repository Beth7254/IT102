#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <windows.h>

void logIn();
void mainMenu();
void pattern();
void quadraticEquation();
void pascalTriangle();
void sorting();
void endProgram();
void exitProgram();

void patternBody();
void quadraticEquationBody();
void pascalTriangleBody();
void sortingBody();
void gotoxy(int x, int y);
int tryAgain();
void returnHome();
void userAdd();

int num1 = 0, num2 = 0, sum = 0, diff = 0, prod = 0;
float qou = 0;

void logIn()
{
    char username[20], password[20];
    printf("LOGIN\n");
    printf("Username: ");
    scanf("%s", username);
    printf("Password: ");
    scanf("%s", password);

    if (strcmp(username, "marybeth.gracia@dbtc-cebu.edu.ph") == 0 && strcmp(password, "Mary2004") == 0)
    {
        printf("Hello < %s >\n", username);
    }
    else
    {
        printf("Invalid username or password.\n");
    }
    int tryAgain();
}

int main()
{
    int choice = 0;
    int index = 1;
    system("chcp 65001 >null");
    system("cls");
    mainMenu();
    pattern();
    while (1)
    {
        choice = getch();
        switch (choice)
        {
        case 80:
            if (index >= 5)
                index = 5;
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
                patternBody();
                break;

            case 2:
                quadraticEquationBody();
                break;
            case 3:
                pascalTriangleBody();
                break;
            case 4:
                sortingBody();
                break;
            case 5:
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
            quadraticEquation();
            break;
        case 3:
            pascalTriangle();
            break;
        case 4:
            sorting();
            break;
        case 5:
            endProgram();
            break;
        }
    }
}

int tryAgain()
{
    return 1;
}

void patternBody()
{
    system("cls");
    int ai = 0, aj = 0;
    int bi = 0, bj = 0, bn = 5;
    int i = 0, j = 0, rows = 5, k = 0;
    int di = 0, dj = 0, dn = 5;

    printf("     PATTERN \n");
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

    printf("Pattern #4:Multiplication Table \n");
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

    getch();

    if (tryAgain())
        pattern();
    else
        returnHome();
}
void quadraticEquationBody()
{

    getch();

    if (tryAgain())
        series();
    else
        returnHome();
}
void pascalTriangleBody()
{
    int triangle[10][10];

    for (int i = 0; i < 10; i++)
    {
        triangle[0][i] = 1;
    }

    for (int i = 1; i < 10; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            if (j == 0 || j == i)
            {
                triangle[i][j] = 1;
            }
            else
            {
                triangle[i][j] = triangle[i - 1][j - 1] + triangle[i - 1][j];
            }
        }
    }

    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("%d ", triangle[i][j]);
        }
        printf("\n");
    }
    getch();

    if (tryAgain())
        series();
    else
        returnHome();
}

void sortingBody()
{

    getch();

    if (tryAgain())
        series();
    else
        returnHome();
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

void userAdd()
{
    gotoxy(50, 8);
    printf("Enter first num: ");
    scanf("%d", &num1);
    gotoxy(50, 9);
    printf("Enter second num: ");
    scanf("%d", &num2);
}

void endProgram()
{
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), BACKGROUND_RED);
    gotoxy(48, 14);
    printf(" >  END PROGRAM       ");

    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), BLACK_PEN);
}

void sorting()
{
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), BACKGROUND_GREEN);
    gotoxy(48, 13);
    printf(" >  SORTING        ");

    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), BLACK_PEN);
}

void pascalTriangle()
{
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), BACKGROUND_GREEN);
    gotoxy(48, 12);
    printf(" >  PASCAL'S TRIANGLE        ");

    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), BLACK_PEN);
}

void quadraticEquation()
{
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), BACKGROUND_BLUE);
    gotoxy(48, 11);
    printf(" >  QUADRATIC EQUATION  ");

    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), BLACK_PEN);
}

void pattern()
{
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), BACKGROUND_INTENSITY);
    gotoxy(48, 10);
    printf(" >  PATTERN           ");

    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), BLACK_PEN);
}

void mainMenu()
{
    system("cls");
    gotoxy(47, 5);
    printf("╔══════════════════════════════════════════════════════╗\n");
    gotoxy(47, 6);
    printf("║      Hello            ║                              ║\n");
    gotoxy(47, 7);
    printf("║                       ║                              ║\n");
    gotoxy(47, 8);
    printf("╚═══════════════════════╝                              ║\n");
    gotoxy(47, 10);
    printf("║ 1. Pattern            ║                              ║\n");
    gotoxy(47, 11);
    printf("║ 2. Quadratic Equation ║                              ║\n");
    gotoxy(47, 12);
    printf("║ 3. Pascal's Triangle  ║                              ║\n");
    gotoxy(47, 13);
    printf("║ 4. Sorting            ║                              ║\n");
    gotoxy(47, 14);
    printf("║ 5.End Program         ║                              ║\n");
    gotoxy(47, 15);
    printf("╚══════════════════════════════════════════════════════╝\n");
}

void gotoxy(int x, int y)
{
    COORD c = {x, y};

    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);
}