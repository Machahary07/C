// wap to print the sum of squares of first n natural numbers
#include <stdio.h>

int main() {
    int n, i, sum = 0;
    printf("Enter the number: ");
    scanf("%d", &n);
    for (i=1; i<=n; i++) {
        sum += i*i;
    }
    printf("The sum of squares of first %d natural numbers is %d\n", n, sum);
    return 0;
}