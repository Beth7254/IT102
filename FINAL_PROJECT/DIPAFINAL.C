#include <stdio.h>
#include <math.h>

int main()
{
    char word[] = "Mary Beth";
    int month = 7, day = 25, year = 2004;
    char dayOfWeek[] = "Friday";

    printf("WORD: %s\n", word);
    printf("DATE: %d-%d-%d %s\n", month, day, year, dayOfWeek);
    printf("MORSE CODE: ");
    for (int i = 0; i < strlen(word); i++)
    {
        char letter = word[i];
        if (letter == ' ')
        {
            printf(" / ");
        }
        else
        {
            int index = letter - 'A';
            for (int j = 0; j < 5; j++)
            {
                char bit = (index & (1 << (4 - j))) ? '1' : '0';
                printf("%c", bit);
            }
        }
    }
void multiplication()
    printf("MULTIPLICATION TABLE X = - b ± √b² - 4ac:\n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            int a = i == 0 ? 2 : -2;
            int b = j + 1;
            int x = -b ± sqrt(b * b - 4 * a * (b - 2));
            printf("%3d ", x);
        }
        printf("\n");
    }

    return 0;
}