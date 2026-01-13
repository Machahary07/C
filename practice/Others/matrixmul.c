#include <stdio.h>

int main() {
    int r1, c1, r2, c2;

    // Input dimensions of matrix A
    printf("Enter rows and columns for Matrix A: ");
    scanf("%d %d", &r1, &c1);

    // Input dimensions of matrix B
    printf("Enter rows and columns for Matrix B: ");
    scanf("%d %d", &r2, &c2);

    // Check if multiplication is possible
    if (c1 != r2) {
        printf("\n Matrix multiplication not possible (A's columns != B's rows)\n");
        return 0;
    }

    int A[r1][c1], B[r2][c2], result[r1][c2];

    // Input matrix A
    printf("\nEnter elements of Matrix A (%dx%d):\n", r1, c1);
    for (int i = 0; i < r1; i++) {
        printf("Row %d: ", i + 1);
        for (int j = 0; j < c1; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    // Input matrix B
    printf("\nEnter elements of Matrix B (%dx%d):\n", r2, c2);
    for (int i = 0; i < r2; i++) {
        printf("Row %d: ", i + 1);
        for (int j = 0; j < c2; j++) {
            scanf("%d", &B[i][j]);
        }
    }

    // Print Matrix A
    printf("\nMatrix A:\n");
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c1; j++) {
            printf("%4d", A[i][j]);
        }
        printf("\n");
    }

    // Print Matrix B
    printf("\nMatrix B:\n");
    for (int i = 0; i < r2; i++) {
        for (int j = 0; j < c2; j++) {
            printf("%4d", B[i][j]);
        }
        printf("\n");
    }

    // Multiply matrices
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            result[i][j] = 0;
            for (int k = 0; k < c1; k++) {
                result[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    // Print result
    printf("\nMatrix A x B (Result):\n");
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            printf("%4d", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}
