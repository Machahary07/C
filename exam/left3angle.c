#include <stdio.h>

int main() {
    int n=5, i, j, space;
    for (i = 1; i <= n; i++) {
        for (space = 1; space <= n - i; space++) {
            printf("  ");
        }
        for (j = 1; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}