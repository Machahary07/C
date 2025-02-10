//printf the factorials of a number n
#include <stdio.h>
#include <math.h>
int factorial(int n) {
    if (n == 0) return 1;
    return n * factorial(n - 1);
}

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("Factorial of %d = %d", n, factorial(n));
    return 0;
}
// gcc printfno.c -o main