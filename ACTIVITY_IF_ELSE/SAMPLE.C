#include <stdio.h>

int main()
{
    int num1 = 0;
    int num2 = 0;

    printf("enter the value for num1 (1-10): ");
    scanf("%d", &num1);

    printf("enter the value for num2 (1-10): ");
    scanf("%d", &num2);

    if (num1 >= num2)

    {
        printf(" number %d is greater than or eqaul to %d ", num1, num2);
    }
    else

    {
        printf(" number %d is less than %d", num1, num2);
    }
}
