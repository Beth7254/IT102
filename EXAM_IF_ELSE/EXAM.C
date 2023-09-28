/*
CREATE A PROGRAM THAT WILL ASK A NUMBER FROM THE USER. THE NUMBER SHOULD BE BETWEEN 20 THROUGH 30.
THEN FIND OUT IF THE NUMBER IS ODD OR EVEN.
*/

#include <stdio.h>

int main()
{

    int number = 0;

    printf("Enter a number (20-30):");
    scanf("%d", &number);

    if (number<20, number>30)
    {
        printf("The number should be between 20 and 30");
    }
    else
    {
        if (number % 2 == 0)
        {
            printf("Number is odd.\n");
        }
        else
        {
            printf("Number is even.\n");
        }
    }
    return 0;
}