#include <stdio.h>

int main () {
    int n;
    printf("n = ");
    scanf("%d",&n);

    printf("Enter an odd number greater than 3: ");
    while (scanf("%d", &n) != 1 || n % 2 == 0 || n <= 3) {
        printf("Invalid input! Enter an odd number greater than 3: ");
        while (getchar() != '\n');
    }

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
    } return 0;
}