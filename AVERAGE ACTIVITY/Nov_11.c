

#include <stdio.h>

void swap(int *xp, int *yp) {
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

void bubbleSort(int arr[], int n) {
   int i, j;
   for (i = 0; i < n-1; i++)       
       for (j = 0; j < n-i-1; j++) 
           if (arr[j] < arr[j+1])
              swap(&arr[j], &arr[j+1]);
}

double findAverage(int arr[], int n) {
    int i;
    double sum = 0;
    for (i = 0; i < n; i++)
        sum += arr[i];
    return sum / n;
}

int main() {
    int minutes[20];
    int i;
    double average;

    // fill the array with minutes data
    for (i = 0; i < 20; i++) {
        minutes[i] = rand() % 100 + 1;
    }

    bubbleSort(minutes, 20);

    average = findAverage(minutes, 20);

    printf("Sorted array in descending order: \n");
    for (i = 0; i < 20; i++)
        printf("%d ", minutes[i]);
    printf("\n");

    printf("Average time: %.2f\n", average);

    return 0;
}
