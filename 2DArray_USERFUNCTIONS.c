// UserFunctions.c
#include <stdio.h>
#include <stdlib.h>
#include "UserFunctions.h"

int getValidRows() {
    int rows;
    do {
        printf("Enter the number of rows (1-10): ");
        scanf("%d", &rows);
        if (rows < 1 || rows > 10) {
            printf("Invalid number of rows. Please enter a value between 1 and 10.\n");
        }
    } while (rows < 1 || rows > 10);
    return rows;
}

int getValidCols() {
    int cols;
    do {
        printf("Enter the number of columns (4-10): ");
        scanf("%d", &cols);
        if (cols < 4 || cols > 10) {
            printf("Invalid number of columns. Please enter a value between 4 and 10.\n");
        }
    } while (cols < 4 || cols > 10);
    return cols;
}

void generateRandomArray(int array[][10], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            array[i][j] = rand() % 100;
        }
    }
}

void print2DArray(int array[][10], int rows, int cols) {
    printf("Generated 2D Array:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%2d ", array[i][j]);
        }
        printf("\n");
    }
}

void computeAndPrintAverages(int array[][10], int rows, int cols) {
    printf("Averages of each row:\n");
    for (int i = 0; i < rows; i++) {
        int sum = 0;
        for (int j = 0; j < cols; j++) {
            sum += array[i][j];
        }
        double average = (double)sum / cols;
        printf("Row %d average: %.2f\n", i + 1, average);
    }
}
