#include <stdio.h>

int main () {
    int n;
    printf("n = ");
    scanf("%d",&n);

    // Check if number is greater than 3 and odd
    if (n > 3 && n % 2 != 0) {
        // Original pattern printing code
        int s = n / 2;
        for (int i = 1; i <= n; i += 2) {
            for (int j = 0; j < s; j++) printf("  ");
            for (int j = 0; j < i; j++) printf("X ");
            printf("\n");
            s--;
        }

        s = 1;
        for (int i = n - 2; i >= 1; i -= 2) {
            for (int j = 0; j < s; j++) printf("  ");
            for (int j = 0; j < i; j++) printf("X ");
            printf("\n");
            s++;
        }
    } else {
        printf("Error: Please enter an odd number greater than 3.\n");
    }

    return 0;
}