#include <stdio.h>

int main() {
    int N, rev=0, rem;

    printf("Enter a number: ");
    scanf("%d", &N);

    while (N>0) {
        rem = N % 10;
        rev = rev * 10 + rem;
        N = N /10;
    }

    printf("Reversed number: %d\n", rev);
}