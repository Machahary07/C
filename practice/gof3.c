#include <stdio.h>

int main() {
    int a, b, c;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);
    if (b > a) {
        a = b;
    }
    if (c > a) {
        a = c;
    }
    printf("The greatest number is: %d\n", a);
    return 0;
}