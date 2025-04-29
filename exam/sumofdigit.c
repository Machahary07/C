//wap in c to input a term and find the sum of digits of the term
#include <stdio.h>

int main() {
    int n, sum = 0, digit;
    printf("Enter a number: ");
    scanf("%d", &n);

    while (n != 0) {
        digit = n % 10; // Get the last digit
        sum += digit;   // Add it to the sum
        n /= 10;        // Remove the last digit
    }

    printf("Sum of digits: %d\n", sum);
    return 0;
}