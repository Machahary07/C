#include <stdio.h>
#define ROWS 3
#define COLS 3

int main() {
    int arr[ROWS][COLS], sum = 0;
    printf("Enter 9 elements:\n");
    for (int i = 0; i < ROWS; i++)
        for (int j = 0; j < COLS; j++) {
            scanf("%d", &arr[i][j]);
            sum += arr[i][j];
        }
    printf("Sum: %d\n", sum);
    return 0;
}