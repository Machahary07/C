//WAP in c to check if the input is amrstrong or not

#include <stdio.h>
#include <math.h>

#include <stdio.h>
#include <math.h>

int main() {
    int n, temp, digit, power = 0;
    double sum = 0;

    printf("Enter a number: ");
    scanf("%d", &n);
    temp = n;

    // Count digits
    for (int i = n;i; i /= 10) power++;

    // Calculate Armstrong sum
    for (int i = n;i; i /= 10) {
        digit = i % 10;
        sum += pow(digit, power);
    }

    if ((int)sum == n)
        printf("%d is an Armstrong number.\n", n);
    else
        printf("%d is not an Armstrong number.\n", n);

    return 0;
}