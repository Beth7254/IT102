#include<stdio.h>

int main()
{
    int number= 0;
    int number_two= 0;

    int sum= 0;
    int difference= 0;
    int product= 0;
    double quotient= 0;

    printf("Enter a value for number:");
    scanf("%d", & number);

    printf("Enter a value for the second number:");
    scanf("%d", & number_two);

    sum= number + number_two;
    difference= number - number_two;
    product= number * number_two;
    quotient= (double)number/ (double)number_two;

    printf("the sum of %d and %d is %d \n", number, number_two, sum);
    printf("the difference of %d and %d is %d \n", number, number_two, difference);
    printf("the product of %d and %d is %d \n", number, number_two, product);
    printf("the number of %d and %d is %.2f \n", number, number_two, quotient);

    //return 0
}
