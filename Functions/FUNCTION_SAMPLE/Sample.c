#include <stdio.h>

void extraFunction();
void addition();

int globalNumber = 5;

void main()
{
    int number = 10;
    int sum = 0;

    sum = number + globalNumber;

    extraFunction();

    printf("This is the main funation \n");
    printf("The sum of %d and %d is %d \n", number, globalNumber, sum);

    addition();
}

void extraFunction()
{
    printf("This is an extra function \n");
    printf("The global variable's value id %d \n", globalNumber);
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