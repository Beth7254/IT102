#include<stdio.h>
#include<math.h>

void sortArray(int array[20]);


void main()
{
    system("cls");
    int myArray[20];
    int i = 0;
    float average = 0;
    
    for(i=0; i < 20; i ++)
    {
        printf("Please enter number for index %d: ", i);
        scanf("%d", &myArray[i]);
        average += myArray[i];
    }

    average = (average / 20);

    sortArray(myArray);

    printf("\nThe average is %.2f", average);

}

void sortArray(int array[20])
{
    int i = 0, j = 0, temp = 0;

    for(i = 0; i < 20; i++)
    {
        for(j = i; j < 20; j ++)
        {
            if(array[j] > array[i])
            {
                temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }

    printf("\nThe sorted values: \n");

    for(i = 0; i < 20; i++)
    {
        printf("%d ", array[i]);
    }
}