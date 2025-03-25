#include <stdio.h>

int main() {
    for (int n = 2; n <= 100; n++) {
        for (int i = 2; i < n; i++) {
            if (n % i == 0) {
                break;
            }
            if (i == n - 1) {
                printf("%d ", n);
            }
        }
        if (n == 2) {
            printf("%d ", n);
        }
    }
    return 0;
}
