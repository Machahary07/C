// WAP to check if the num is prime or not
#include <stdio.h>
int main() {
    int n, i;
    printf("Enter the number: ");
    scanf("%d", &n);
    if (n>1) {
        for (i=2; i<=n/2; i++) {
            if (n%i == 0) {
                printf("%d is not a prime number\n", n);
                break;
            }
        }
        if (i == n/2+1) {
            printf("%d is a prime number\n", n);
        }
    }
    else {
        printf("%d is not a prime number\n", n);
    }
    return 0;
}