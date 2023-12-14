#include <stdio.h>
#include <conio.h>
#include <windows.h>

void gotoxy(int x, int y);
void logIn();
void mainMenu();
void loginBorder();
void colorPatternone();
void colorPatterntwo();
void colorPatternthree();
void colorPatternfour();

void colorQ();
void colorP();
void colorS();
void pattern();

void pattern1();
int main()
{
    int choice = 0;
    int index = 1;
    system("chcp 65001 >null");
    logIn();
    mainMenu();
    colorPatternone();
    while (1) // up-H | right-M | down-P | left-K
    {
        choice = getch();

        switch (choice)
        {
        case 80:
            if (index >= 9)
                index = 9;
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
                pattern1();
                break;
            case 2:

                break;
            case 3:

                break;
            case 4:

                break;
            }
            break;
        }

        mainMenu();

        switch (index)
        {
        case 1:
            colorPatternone();
            break;
        case 2:
            colorPatterntwo();
            break;
        case 3:
            colorPatternthree();
            break;
        case 4:
            colorPatternfour();
            break;
        case 7:
            colorQ();
            break;
        case 8:
            colorP();
            break;
        case 9:
            colorS();
            break;
        }
    }

    return 0;
}

void gotoxy(int x, int y)
{
    COORD c = {x, y};
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);
}
int checkCredentials(char *username, char *password)
{

    if (strcmp(username, "marybeth.gracia@dbtc-cebu.edu.ph") == 0 && strcmp(password, "Beth2004") == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void logIn()
{
    char username[80];
    char password[80];
    int i = 0;
    char ch;
    loginBorder();
    gotoxy(55, 16);
    printf("Enter your username: ");
    scanf("%s", username);

    gotoxy(55, 17);
    printf("Enter your password: ");

    while (1)
    {
        ch = getch();

        if (ch == '\r')
        {
            password[i] = '\0';
            break;
        }
        else if (ch == '\b')
        {
            if (i > 0)
            {
                i--;
                printf("\b \b");
            }
        }
        else
        {
            password[i++] = ch;
            printf("♡");
        }
    }

    if (checkCredentials(username, password))
    {
        gotoxy(55, 19);
        printf("\033[32mLog in successful. Press any Key to Continue\033[0m");

        getch();
        system("cls");
        mainMenu();
    }
    else
    {
        gotoxy(55, 19);
        printf("Invalid username or password. ");
        printf("Press any Key to Try Again");
        getch();

        system("cls");
        logIn();
    }
}

void mainMenu()
{

    gotoxy(3, 3);
    printf("╔══════════════════════╗\n");
    gotoxy(3, 4);
    printf("║                      ║\n");
    gotoxy(3, 5);
    printf("║       Hello!         ║\n");
    gotoxy(3, 6);
    printf("║      Mary Beth♡      ║\n");
    gotoxy(3, 7);
    printf("║                      ║\n");
    gotoxy(3, 8);
    printf("║                      ║\n");
    gotoxy(3, 9);
    printf("║                      ║\n");
    gotoxy(3, 10);
    printf("║                      ║\n");
    gotoxy(3, 11);
    printf("║                      ║\n");
    gotoxy(3, 12);
    printf("║                      ║\n");
    gotoxy(3, 13);
    printf("║                      ║\n");
    gotoxy(3, 14);
    printf("╠══════════════════════╣\n");
    gotoxy(3, 15);
    printf("║  PATTERN             ║\n");
    gotoxy(3, 16);
    printf("║   Pattern 1          ║\n");
    gotoxy(3, 17);
    printf("║   Pattern 2          ║\n");
    gotoxy(3, 18);
    printf("║   Pattern 3          ║\n");
    gotoxy(3, 19);
    printf("║   Pattern 4          ║\n");
    gotoxy(3, 20);
    printf("╠══════════════════════╣\n");
    gotoxy(3, 21);
    printf("║                      ║\n");
    gotoxy(3, 22);
    printf("║  Quadriatic Formula  ║\n");
    gotoxy(3, 23);
    printf("║  Pascals Triangle    ║\n");
    gotoxy(3, 24);
    printf("║  Sorting             ║\n");
    gotoxy(3, 25);
    printf("║                      ║\n");
    gotoxy(3, 26);
    printf("║                      ║\n");
    gotoxy(3, 27);
    printf("║                      ║\n");
    gotoxy(3, 28);
    printf("║                      ║\n");
    gotoxy(3, 29);
    printf("║                      ║\n");
    gotoxy(3, 30);
    printf("║                      ║\n");
    gotoxy(3, 31);
    printf("║                      ║\n");
    gotoxy(3, 32);
    printf("║                      ║\n");
    gotoxy(3, 33);
    printf("║                      ║\n");
    gotoxy(3, 34);
    printf("║                      ║\n");
    gotoxy(3, 35);
    printf("║                      ║\n");
    gotoxy(3, 36);
    printf("║                      ║\n");
    gotoxy(3, 37);
    printf("║                      ║\n");
    gotoxy(3, 38);
    printf("║                      ║\n");
    gotoxy(3, 39);
    printf("║                      ║\n");
    gotoxy(3, 40);
    printf("╚══════════════════════╝\n");
}
void colorQ()
{
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), BACKGROUND_RED);
    gotoxy(3, 22);
    printf("  Quadriatic Formula  ");
}
void colorP()
{
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), BACKGROUND_RED);
    gotoxy(3, 23);
    printf("  Pascals Triangle    ");
}
void colorS()
{
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), BACKGROUND_RED);
    gotoxy(3, 24);
    printf("  Sorting             ");
}

void colorPatternone()
{
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), BACKGROUND_BLUE);
    gotoxy(3, 16);
    printf(" >  Pattern 1          ");

    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), BLACK_PEN);
}
void colorPatterntwo()
{
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), BACKGROUND_BLUE);
    gotoxy(3, 17);
    printf(" >  Pattern 2          ");

    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), BLACK_PEN);
}
void colorPatternthree()
{
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), BACKGROUND_BLUE);
    gotoxy(3, 18);
    printf(" >  Pattern 3          ");

    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), BLACK_PEN);
}
void colorPatternfour()
{
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), BACKGROUND_BLUE);
    gotoxy(3, 19);
    printf(" >  Pattern 4          ");

    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), BLACK_PEN);
}

void pattern1()
{
    gotoxy(30, 10);
    printf("* * * * * \n");
    gotoxy(30, 11);
    printf(" *     * \n");
    gotoxy(30, 12);
    printf("  *   * \n");
    gotoxy(30, 13);
    printf("   * * \n");
    gotoxy(30, 14);
    printf("    *");
}

void pattern2()
{
}

void print_pattern3(char *name)
{
    int len = strlen(name);
    for (int i = 0; i < len; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("%c", name[j]);
        }
        printf("\n");
    }
}

void main()
{
    char name[] = "MARY BETH GRACIA";
    print_pattern(name);
}

void loginBorder()
{
    gotoxy(50, 12);
    printf("╔═════════════════════════════════════╗");
    gotoxy(50, 13);
    printf("║              Log-In♡:               ║");
    gotoxy(50, 14);
    printf("╠═════════════════════════════════════╣\n");
    gotoxy(50, 15);
    printf("║                                     ║\n");
    gotoxy(50, 16);
    printf("║                                     ║\n");
    gotoxy(50, 17);
    printf("║                                     ║\n");
    gotoxy(50, 18);
    printf("║                                     ║\n");
    gotoxy(50, 19);
    printf("║                                     ║\n");
    gotoxy(50, 20);
    printf("╚═════════════════════════════════════╝\n");
}