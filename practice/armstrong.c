//WAP in c to check if the input is amrstrong or not
#include <stdio.h>
#include <math.h>

int main() {
    int n, temp, rem, power = 0;
    double sum = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    temp = n;
    for (int i = n;i; i /= 10) power++;
    for (int i = n;i; i /= 10) {
        rem = i % 10;
        sum += pow(rem, power);
    }
    if ((int)sum == n)
        printf("%d is an Armstrong number.\n", n);
    else
        printf("%d is not an Armstrong number.\n", n);
    return 0;
}