#include <stdio.h>

// Function to calculate sums of odd and even digits
void sumOddEvenDigits(int n, int *oddSum, int *evenSum) {
    *oddSum = 0;
    *evenSum = 0;
    int digit;
    while (n != 0) {
        digit = n % 10;
        if (digit % 2 == 0)
            *evenSum += digit;
        else
            *oddSum += digit;
        n /= 10;
    }
}

int main() {
    int n, oddSum, evenSum;
    printf("Enter a number: ");
    scanf("%d", &n);

    sumOddEvenDigits(n, &oddSum, &evenSum);

    printf("Sum of odd digits: %d\n", oddSum);
    printf("Sum of even digits: %d\n", evenSum);

    return 0;
}
