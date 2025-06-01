#include <stdio.h>

int main() {
    int n,f=1;
    printf("Enter a number: ");
    scanf("%d", &n);

    for (int i=1;i<=n;i++) {
        f*=i;
    }

    printf("Factorial of %d is %d\n", n, f);
    return 0;
}