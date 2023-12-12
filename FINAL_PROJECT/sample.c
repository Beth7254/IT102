#include <stdio.h>  
int main() {  
    int triangle[10][10];  
  
    // initialize first row to 1's  
    for (int i = 0; i< 10; i++) {  
        triangle[0][i] = 1;  
    }  
  
    // compute subsequent rows  
    for (int i = 1; i< 10; i++) {  
        for (int j = 0; j <= i; j++) {  
            if (j == 0 || j == i) {  
                triangle[i][j] = 1;  
            } else {  
                triangle[i][j] = triangle[i-1][j-1] + triangle[i-1][j];  
            }  
        }  
    }  
  
    // display triangle  
    for (int i = 0; i< 10; i++) {  
        for (int j = 0; j <= i; j++) {  
printf("%d ", triangle[i][j]);  
        }  
printf("\n");  
    }  
  
    return 0;  
}  
