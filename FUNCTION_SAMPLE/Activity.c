#include<stdio.h>
#include<conio.h>
#include<windows.h>

void gotoxy(int x, int y);
void mainMenu();

void main()
{
    system("chcp 65001 >null");
    mainMenu();
    getch();
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
    printf("║ 5. Exit              ║\n"); 
    printf("╚══════════════════════╝\n");             
}
void gotoxy(int x, int y)
{
    COORD c = { x, y };  
    SetConsoleCursorPosition(  GetStdHandle(STD_OUTPUT_HANDLE) , c);
}