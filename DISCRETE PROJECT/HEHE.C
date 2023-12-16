#include <stdio.h>

void printMat_5x5(int mat[5][5]);
void matMult(const int matA[5][5], const int matB[5][5], int matC[5][5]);

int main()
{
    int matA[5][5] = {{1, 2, 3, 4, 5}, {6, 7, 8, 9, 10}, {11, 12, 13, 14, 15}, {16, 17, 18, 19, 20}, {21, 22, 23, 24, 25}};
    int matB[5][5] = {{1, 0, 0, 0, 0}, {0, 1, 0, 0, 0}, {0, 0, 1, 0, 0}, {0, 0, 0, 1, 0}, {0, 0, 0, 0, 1}};
    int matC[5][5];

    matMult(matA, matB, matC);
    printMat_5x5(matA);
    printMat_5x5(matB);
    printMat_5x5(matC);
}

void printMat_5x5(int mat[5][5])
{
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
}

void matMult(const int matA[5][5], const int matB[5][5], int matC[5][5])
{
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            matC[i][j] = 0;
            for (int k = 0; k < 5; k++)
            {
                matC[i][j] += matA[i][k] * matB[k][j];
            }
        }
    }
}