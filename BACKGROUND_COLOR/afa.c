#include <stdio.h>
#include <string.h>

#define BLACK_PEN 0
#define BACKGROUND_GREEN 2
#define BACKGROUND_BLUE 1
#define BACKGROUND_INTENSITY 12

typedef struct {
    char username[20];
    char password[20];
} UserInfo;

void borderCalculator();
void calculator();
void series();
void pattern();
void endProgram();
void gotoxy(int x, int y);

void mainMenu()
{
    system("cls");
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

void usernameAndPasswordChecker()
{
    char inputUsername[20];
    char inputPassword[20];

    printf("Enter username: ");
    scanf("%s", inputUsername);

    printf("Enter password: ");
    scanf("%s", inputPassword);

    UserInfo userInfo[] = {{"user1", "pass1"}, {"user2", "pass2"}};
    int numOfUsers = sizeof(userInfo) / sizeof(userInfo[0]);

    int i;
    for (i = 0; i < numOfUsers; i++) {
        if (strcmp(userInfo[i].username, inputUsername) == 0 &&
            strcmp(userInfo[i].password, inputPassword) == 0) {
            printf("Login successful!\n");
            return;
        }
    }

    printf("Invalid username or password.\n");
}

int main()
{
    mainMenu();
    usernameAndPasswordChecker();
    getch();
    return 0;
}

#include <stdio.h>
#include <string.h>

#define BLACK_PEN 0
#define BACKGROUND_GREEN 2
#define BACKGROUND_BLUE 1
#define BACKGROUND_INTENSITY 12

typedef struct {
    char username[20];
    char password[20];
} UserInfo;

void borderCalculator();
void calculator();
void series();
void pattern();
void endProgram();
void gotoxy(int x, int y);

void mainMenu()
{
    system("cls");
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

void usernameAndPasswordChecker()
{
    char inputUsername[20];
    char inputPassword[20];

    printf("Enter username: ");
    scanf("%s", inputUsername);

    printf("Enter password: ");
    scanf("%s", inputPassword);

    UserInfo userInfo[] = {{"user1", "pass1"}, {"user2", "pass2"}};
    int numOfUsers = sizeof(userInfo) / sizeof(userInfo[0]);

    int i;
    for (i = 0; i < numOfUsers; i++) {
        if (strcmp(userInfo[i].username, inputUsername) == 0 &&
            strcmp(userInfo[i].password, inputPassword) == 0) {
            printf("Login successful!\n");
            return;
        }
    }

    printf("Invalid username or password.\n");
}

int main()
{
    mainMenu();
    usernameAndPasswordChecker();
    getch();
    return 0;
}

void gotoxy(int x, int y)
{
    COORD c = {x, y};

    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);
}