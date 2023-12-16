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
void pattern2();
void pattern3();
void pattern4();
void quadraticEquation();
void pascalTriangle();
void arraySorting();
void printArray();
void Mborder();
int myArray[10];

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
                pattern2();
                break;
            case 3:
                pattern3();
                break;
            case 4:
                pattern4();
                break;

            case 7:
                quadraticEquation();
                break;
            case 8:
                pascalTriangle();
                break;
            case 9:
                arraySorting();
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
    char username[50];
    char password[50];
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
            printf("💜");
        }
    }

    if (checkCredentials(username, password))
    {
        gotoxy(55, 19);
        printf("\033[0;35mLog in successful. Press any Key to Continue\033[0m");

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
    printf("\033[0;35m╔══════════════════════╦══════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════╗\033[0m\n");
    gotoxy(3, 4);
    printf("\033[0;35m║                      ║                                                                                                                                                                              ║\033[0m\n");
    gotoxy(3, 5);
    printf("\033[0;35m║       Hello!         ║                                                                                                                                                                              ║\033[0m\n");
    gotoxy(3, 6);
    printf("\033[0;35m║      Mary Beth       ║                                                                                                                                                                              ║\033[0m\n");
    gotoxy(3, 7);
    printf("\033[0;35m║                      ║                                                                                                                                                                              ║\033[0m\n");
    gotoxy(3, 8);
    printf("\033[0;35m║       /)   /)        ║                                                                                                                                                                              ║\033[0m\n");
    gotoxy(3, 9);
    printf("\033[0;35m║      ( ᵔ ᵕ ᵔ )       ║                                                                                                                                                                              ║\033[0m\n");
    gotoxy(3, 10);
    printf("\033[0;35m║      / づ  づ ~ 💜   ║                                                                                                                                                                              ║\033[0m\n");
    gotoxy(3, 11);
    printf("\033[0;35m║                      ║                                                                                                                                                                              ║\033[0m\n");
    gotoxy(3, 12);
    printf("\033[0;35m╠══════════════════════╣                                                                                                                                                                              ║\033[0m\n");
    gotoxy(3, 13);
    printf("\033[0;35m║  PATTERN             ║                                                                                                                                                                              ║\033[0m\n");
    gotoxy(3, 14);
    printf("\033[0;35m║   Pattern 1          ║                                                                                                                                                                              ║\033[0m\n");
    gotoxy(3, 15);
    printf("\033[0;35m║   Pattern 2          ║                                                                                                                                                                              ║\033[0m\n");
    gotoxy(3, 16);
    printf("\033[0;35m║   Pattern 3          ║                                                                                                                                                                              ║\033[0m\n");
    gotoxy(3, 17);
    printf("\033[0;35m║   Pattern 4          ║                                                                                                                                                                              ║\033[0m\n");
    gotoxy(3, 18);
    printf("\033[0;35m╠══════════════════════╣                                                                                                                                                                              ║\033[0m\n");
    gotoxy(3, 19);
    printf("\033[0;35m║  Quadriatic Formula  ║                                                                                                                                                                              ║\033[0m\n");
    gotoxy(3, 20);
    printf("\033[0;35m║  Pascals Triangle    ║                                                                                                                                                                              ║\033[0m\n");
    gotoxy(3, 21);
    printf("\033[0;35m║  Sorting             ║                                                                                                                                                                              ║\033[0m\n");
    gotoxy(3, 22);
    printf("\033[0;35m║                      ║                                                                                                                                                                              ║\033[0m\n");
    gotoxy(3, 23);
    printf("\033[0;35m║                      ║                                                                                                                                                                              ║\033[0m\n");
    gotoxy(3, 24);
    printf("\033[0;35m║                      ║                                                                                                                                                                              ║\033[0m\n");
    gotoxy(3, 25);
    printf("\033[0;35m║                      ║                                                                                                                                                                              ║\033[0m\n");
    gotoxy(3, 26);
    printf("\033[0;35m║                      ║                                                                                                                                                                              ║\033[0m\n");
    gotoxy(3, 27);
    printf("\033[0;35m║                      ║                                                                                                                                                                              ║\033[0m\n");
    gotoxy(3, 28);
    printf("\033[0;35m║                      ║                                                                                                                                                                              ║\033[0m\n");
    gotoxy(3, 29);
    printf("\033[0;35m╚══════════════════════╩══════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════╝\033[0m\n");
}
void colorQ()
{
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), BACKGROUND_BLUE);
    gotoxy(3, 19);
    printf("  Quadriatic Formula  ");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), BLACK_PEN);
}
void colorP()
{
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), BACKGROUND_BLUE);
    gotoxy(3, 20);
    printf("  Pascals Triangle    ");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), BLACK_PEN);
}
void colorS()
{
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), BACKGROUND_BLUE);
    gotoxy(3, 21);
    printf("  Sorting             ");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), BLACK_PEN);
}

void colorPatternone()
{
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), BACKGROUND_BLUE);
    gotoxy(3, 14);
    printf(" >  Pattern 1          ");

    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), BLACK_PEN);
}
void colorPatterntwo()
{
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), BACKGROUND_BLUE);
    gotoxy(3, 15);
    printf(" >  Pattern 2          ");

    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), BLACK_PEN);
}
void colorPatternthree()
{
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), BACKGROUND_BLUE);
    gotoxy(3, 16);
    printf(" >  Pattern 3          ");

    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), BLACK_PEN);
}
void colorPatternfour()
{
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), BACKGROUND_BLUE);
    gotoxy(3, 17);
    printf(" >  Pattern 4          ");

    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), BLACK_PEN);
}

void pattern1()
{
    mainMenu();
    gotoxy(50, 13);
    printf(" \033[0;35m╔══════════════════════════╗\033[0m");
    gotoxy(50, 14);
    printf(" \033[0;35m║       \033[0;35mPATTERN ONE        ║\033[0m");
    gotoxy(50, 15);
    printf(" \033[0;35m║                          ║\033[0m");
    gotoxy(50, 16);
    printf(" \033[0;35m║        * * * * *         ║\033[0m");
    gotoxy(50, 17);
    printf(" \033[0;35m║         *     *          ║\033[0m");
    gotoxy(50, 18);
    printf(" \033[0;35m║          *   *           ║\033[0m");
    gotoxy(50, 19);
    printf(" \033[0;35m║           * *            ║\033[0m");
    gotoxy(50, 20);
    printf(" \033[0;35m║            *             ║\033[0m");
    gotoxy(50, 21);
    printf(" \033[0;35m║                          ║\033[0m");
    gotoxy(50, 22);
    printf(" \033[0;35m║                          ║\033[0m");
    gotoxy(50, 22);
    printf(" \033[0;35m║    Press any Key to      ║\033[0m");
    gotoxy(50, 23);
    printf(" \033[0;35m║         Continue...      ║\033[0m");
    gotoxy(50, 24);
    printf(" \033[0;35m╚══════════════════════════╝\033[0m\n");
    getch();
    system("cls");
}
void pattern2()
{
    mainMenu();
    gotoxy(50, 13);
    printf("\033[0;35m╔══════════════════════════╗\033[0m");
    gotoxy(50, 14);
    printf("\033[0;35m║       \033[0;35mPATTERN TWO        ║\033[0m  ");
    gotoxy(50, 15);
    printf("\033[0;35m║                          ║\033[0m");
    gotoxy(50, 16);
    printf("\033[0;35m║        * * * * *         ║\033[0m");
    gotoxy(50, 17);
    printf("\033[0;35m║        *       *         ║\033[0m");
    gotoxy(50, 18);
    printf("\033[0;35m║        *       *         ║\033[0m");
    gotoxy(50, 19);
    printf("\033[0;35m║        *       *         ║\033[0m");
    gotoxy(50, 20);
    printf("\033[0;35m║        * * * * *         ║\033[0m");
    gotoxy(50, 21);
    printf("\033[0;35m║                          ║\033[0m");
    gotoxy(50, 22);
    printf("\033[0;35m║   \033[0;35mPress any Key to       ║\033[0m");
    gotoxy(50, 23);
    printf("\033[0;35m║        \033[0;35mContinue...       ║\033[0m");
    gotoxy(50, 24);
    printf("\033[0;35m╚══════════════════════════╝\033[0m");
    getch();
    system("cls");
}
void pattern3()
{
    mainMenu();
    gotoxy(50, 8);
    printf("\033[0;35m╔══════════════════════════╗\033[0m");
    gotoxy(50, 9);
    printf("\033[0;35m║      PATTERN THREE       ║\033[0m");
    gotoxy(50, 10);
    printf("\033[0;35m║                          ║\033[0m");
    gotoxy(50, 11);
    printf("\033[0;35m║   M                      ║\033[0m");
    gotoxy(50, 12);
    printf("\033[0;35m║   MA                     ║\033[0m");
    gotoxy(50, 13);
    printf("\033[0;35m║   MAR                    ║\033[0m");
    gotoxy(50, 14);
    printf("\033[0;35m║   MARY                   ║\033[0m");
    gotoxy(50, 15);
    printf("\033[0;35m║   MARYB                  ║\033[0m");
    gotoxy(50, 16);
    printf("\033[0;35m║   MARYBE                 ║\033[0m");
    gotoxy(50, 17);
    printf("\033[0;35m║   MARYBET                ║\033[0m");
    gotoxy(50, 18);
    printf("\033[0;35m║   MARYBETH               ║\033[0m");
    gotoxy(50, 19);
    printf("\033[0;35m║   MARYBETH💜             ║\033[0m");
    gotoxy(50, 20);
    printf("\033[0;35m║                          ║\033[0m");
    gotoxy(50, 21);
    printf("\033[0;35m║    \033[0;35mPress any Key to      ║\033[0m");
    gotoxy(50, 22);
    printf("\033[0;35m║       \033[0;35mContinue...        ║\033[0m");
    gotoxy(50, 23);
    printf("\033[0;35m╚══════════════════════════╝\033[0m\n");
    getch();
    system("cls");
}
void pattern4()
{
    mainMenu();
    gotoxy(75, 8);
    printf("\033[0;35m╔═══════════════════════════════════════════════════╗\033[0m");
    gotoxy(75, 9);
    printf("\033[0;35m║                   \033[0;35mPATTERN FOUR                    ║\033[0m");
    gotoxy(75, 10);
    printf("\033[0;35m║                                                   ║\033[0m");
    gotoxy(75, 11);
    printf("\033[0;35m║  1    2    3    4    5    6    7    8    9    10  ║\033[0m");
    gotoxy(75, 12);
    printf("\033[0;35m║  2    4    6    8    10   12   14   16   18   20  ║\033[0m");
    gotoxy(75, 13);
    printf("\033[0;35m║  3    6    9    12   15   18   21   24   27   30  ║\033[0m");
    gotoxy(75, 14);
    printf("\033[0;35m║  4    8    12   16   20   24   28   32   36   40  ║\033[0m");
    gotoxy(75, 15);
    printf("\033[0;35m║  5    10   15   20   25   30   35   40   45   50  ║\033[0m");
    gotoxy(75, 16);
    printf("\033[0;35m║  6    12   18   24   30   36   42   48   54   60  ║\033[0m");
    gotoxy(75, 17);
    printf("\033[0;35m║  7    14   21   28   35   42   49   56   63   70  ║\033[0m");
    gotoxy(75, 18);
    printf("\033[0;35m║  8    16   24   32   40   48   56   64   72   80  ║\033[0m");
    gotoxy(75, 19);
    printf("\033[0;35m║  9    18   27   36   45   54   63   72   81   90  ║\033[0m");
    gotoxy(75, 20);
    printf("\033[0;35m║  10   20   30   40   50   60   70   80   90   100 ║\033[0m");
    gotoxy(75, 21);
    printf("\033[0;35m║                                                   ║\033[0m");
    gotoxy(75, 22);  
    printf("\033[0;35m║            \033[0;35mPress any Key to                       ║\033[0m");
    gotoxy(75, 23);
    printf("\033[0;35m║                \033[0;35mContinue...                        ║\033[0m");
    gotoxy(75, 24);
    printf("\033[0;35m╚═══════════════════════════════════════════════════╝\033[0m\n");
    getch();
    system("cls");
}
void quadraticEquation()
{
    system("cls");
    mainMenu();
    Mborder();
    gotoxy(50, 12);
    printf("\033[0;35m║  \033[0;35mQUADRIATIC FORMULA :   \033[0m");
    int a = 0, b = 0, c = 0;
    float x = 0;

    gotoxy(57, 16);
    printf("Please enter the value of a: ");
    scanf("%d", &a);

    gotoxy(57, 17);
    printf("Please enter the value of b: ");
    scanf("%d", &b);

    gotoxy(57, 18);
    printf("Please enter the value of c: ");
    scanf("%d", &c);

    x = ((-(b) + sqrt((b * b) - (4 * a * c))) / (2 * a));

    gotoxy(60, 21);
    printf("\x1B[34m+\033[0m  Positive Output: %f", x);

    x = 0;

    x = ((-(b)-sqrt((b * b) - (4 * a * c))) / (2 * a));

    gotoxy(60, 22);
    printf("\033[1;31m-\033[0m  Negative Output: %f", x);
    gotoxy(67, 23);
    printf("  \033[0;35mPress any Key to Continue...\033[0m");
    getch();
    system("cls");
}
void pascalTriangle()
{
    gotoxy(50, 11);printf("\033[0;35m╔═════════════════════════════════════════╗\033[0m");
    gotoxy(50, 12);printf("\033[0;35m║            Pascal's Triangle            ║\033[0m");
    gotoxy(50, 13);printf("\033[0;35m║                    1                    ║\033[0m");
    gotoxy(50, 14);printf("\033[0;35m║                  1   1                  ║\033[0m");
    gotoxy(50, 15);printf("\033[0;35m║                1   2   1                ║\033[0m");
    gotoxy(50, 16);printf("\033[0;35m║              1   3   3   1              ║\033[0m");
    gotoxy(50, 17);printf("\033[0;35m║            1   4   6   4   1            ║\033[0m");
    gotoxy(50, 18);printf("\033[0;35m║          1   5  10  10   5   1          ║\033[0m");
    gotoxy(50, 19);printf("\033[0;35m║        1   6  15  20  15   6   1        ║\033[0m");
    gotoxy(50, 20);printf("\033[0;35m║      1   7  21  35  35  21   7   1      ║\033[0m");
    gotoxy(50, 21);printf("\033[0;35m║    1   8  28  56  70  56  28   8   1    ║\033[0m");
    gotoxy(50, 22);printf("\033[0;35m║  1   9  36  84 126 126  84  36   9   1  ║\033[0m");
    gotoxy(50, 23);printf("\033[0;35m║                                         ║\033[0m");
    gotoxy(50, 24);printf("\033[0;35m╚═════════════════════════════════════════╝\033[0m");
    getch();
    system("cls");
    getch();
    system("cls");
}


void arraySorting()
{
    
    int index = 0;
    int i = 0, j = 0, temp = 0;

    
    do 
    {   
       
        gotoxy(50, 12);printf("\033[0;35m SORTING ARRAYS :        ");
        gotoxy(55, 14);printf("\033[0;35mEnter number for index %d: \033[0m", index++);
        scanf("%d", &myArray[0]);
        gotoxy(55, 15);printf("\033[0;35mEnter number for index %d: \033[0m", index++);
        scanf("%d", &myArray[1]);
        gotoxy(55, 16);printf("\033[0;35mEnter number for index %d: \033[0m", index++);
        scanf("%d", &myArray[2]);
        gotoxy(55, 17);printf("\033[0;35mEnter number for index %d: \033[0m", index++);
        scanf("%d", &myArray[3]);
        gotoxy(55, 18);printf("\033[0;35mEnter number for index %d: \033[0m", index++);
        scanf("%d", &myArray[4]);
        gotoxy(55, 19);printf("\033[0;35mEnter number for index %d: \033[0m", index++);
        scanf("%d", &myArray[5]);
        gotoxy(55, 20);printf("\033[0;35mEnter number for index %d: \033[0m", index++);
        scanf("%d", &myArray[6]);
        gotoxy(55, 21);printf("\033[0;35mEnter number for index %d: \033[0m", index++);
        scanf("%d", &myArray[7]);
        gotoxy(55, 22);printf("\033[0;35mEnter number for index %d: \033[0m", index++);
        scanf("%d", &myArray[8]);
        gotoxy(55, 23);printf("\033[0;35mEnter number for index %d: \033[0m", index++);
        scanf("%d", &myArray[9]);
    }
    while (index < 10);

    gotoxy(52, 25);printf("The Array Contains: ");
    printf("%d, ", myArray[0]);
    printf("%d, ", myArray[1]);
    printf("%d, ", myArray[2]);
    printf("%d, ", myArray[3]);
    printf("%d, ", myArray[4]);
    printf("%d, ", myArray[5]);
    printf("%d, ", myArray[6]);
    printf("%d, ", myArray[7]);
    printf("%d, ", myArray[8]);
    printf("%d, ", myArray[9]);

    for ( i = 0;  i < 10; i++)
    {
        for ( j = 0;  j < 10; j++)
        {
            if (myArray[i] < myArray[j])
            {
                temp = myArray[i];
                myArray[i] = myArray[j];
                myArray[j] = temp;
            }
        }
    }

    printArray(0);
    gotoxy(67, 28);printf("               \033[32mPress any Key to Continue...\033[0m");
                getch();
                system("cls");
}

void printArray(int index)
{
    
    gotoxy(52, 26); printf("The Array is Sorted: ");

    for (index = 0; index < 10; index++)
    {
        if(index < 9)
         printf("%d, ", myArray[index]);
        else
            printf("%d;", myArray[index]);
       
    }
}


void loginBorder()
{
    gotoxy(50, 12);
    printf("\033[0;35m╔══════════════════════════════════════════════════════════════════╗\033[0m\n");
    gotoxy(50, 13);
    printf("\033[0;35m║                            \033[0;35mLog-In :                              ║\033[0m\n");
    gotoxy(50, 14);
    printf("\033[0;35m║                         ૮₍ ˶ᵔ ᵕ ᵔ˶ ₎ა                            ║\033[0m\n");
    gotoxy(50, 15);
    printf("\033[0;35m║                                                                  ║\033[0m\n");
    gotoxy(50, 16);
    printf("\033[0;35m║                                                                  ║\033[0m\n");
    gotoxy(50, 17);
    printf("\033[0;35m║                                                                  ║\033[0m\n");
    gotoxy(50, 18);
    printf("\033[0;35m║                                                                  ║\033[0m\n");
    gotoxy(50, 19);
    printf("\033[0;35m║                                                                  ║\033[0m\n");
    gotoxy(50, 20);
    printf("\033[0;35m╚══════════════════════════════════════════════════════════════════╝\033[0m\n");
}
void Mborder()
{
    gotoxy(50, 9);
    printf("\033[0;35m╔══════════════════════════════════════════════════════════════════╗\033[0m");
    gotoxy(50, 10);
    printf("\033[0;35m║                                                                  ║\033[0m");
    gotoxy(50, 11);
    printf("\033[0;35m║                                                                  ║\033[0m");
    gotoxy(50, 12);
    printf("\033[0;35m║                                                                  ║\033[0m");
    gotoxy(50, 13);
    printf("\033[0;35m║                                                                  ║\033[0m");
    gotoxy(50, 14);
    printf("\033[0;35m║                                                                  ║\033[0m");
    gotoxy(50, 15);
    printf("\033[0;35m║                                                                  ║\033[0m");
    gotoxy(50, 16);
    printf("\033[0;35m║                                                                  ║\033[0m");
    gotoxy(50, 17);
    printf("\033[0;35m║                                                                  ║\033[0m");
    gotoxy(50, 18);
    printf("\033[0;35m║                                                                  ║\033[0m");
    gotoxy(50, 19);
    printf("\033[0;35m║                                                                  ║\033[0m");
    gotoxy(50, 20);
    printf("\033[0;35m║                                                                  ║\033[0m");
    gotoxy(50, 21);
    printf("\033[0;35m║                                                                  ║\033[0m");
    gotoxy(50, 22);
    printf("\033[0;35m║                                                                  ║\033[0m");
    gotoxy(50, 23);
    printf("\033[0;35m║                                                                  ║\033[0m");
    gotoxy(50, 24);
    printf("\033[0;35m╚══════════════════════════════════════════════════════════════════╝\033[0m");
}