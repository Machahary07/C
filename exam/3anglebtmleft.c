#include <stdio.h>

int main() {
    int n, i, j;

    printf("Enter the number of rows: ");
    scanf("%d", &n);

    for (i = n; i >= 1; i--) {  // Loop for rows (from n to 1)
        for (j = 1; j <= i; j++) {  // Print '*' in each row
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}