#include <stdio.h>

int sumOfDigits(int n) {
    int sum = 0, digit;
    while (n != 0) {
        digit = n % 10;
        sum += digit;
        n /= 10;
    }
    return sum;
}

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    int result = sumOfDigits(n);
    printf("Sum of digits: %d\n", result);
    return 0;
}
