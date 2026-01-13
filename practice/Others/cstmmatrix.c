#include <stdio.h>

int main() {
    int rows, cols;

    // Get the order of the matrix
    printf("Enter number of rows: ");
    scanf("%d", &rows);
    printf("Enter number of columns: ");
    scanf("%d", &cols);

    int matrix[rows][cols];  // Variable Length Array (VLA)

    // Input elements of the matrix
    printf("\nEnter %d elements row-wise:\n", rows * cols);
    for (int i = 0; i < rows; i++) {
        printf("Row %d: ", i + 1);
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Display the matrix
    printf("\nMatrix (%dx%d):\n", rows, cols);
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%4d", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}