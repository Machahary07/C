#include <stdio.h>

int main() {
    int n, max, num;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    printf("Enter %d numbers:\n", n);
    scanf("%d", &max);
    for (int i = 1; i < n; i++) {
        scanf("%d", &num);
        if (num > max) max = num;
    }
    printf("The greatest number is: %d\n", max);
    return 0;
}