#include <stdio.h>

int add(int a, int b);

void main()
{
    int i = 5, j = 5;
    printf("The sum of %d & %d is %d", i, j, add(i, j));
}
int add(int a, int b)
{
    return a + b;
}