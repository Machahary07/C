#include <stdio.h>

int main() {
    int n, f = 6;
    scanf("%d", &n);
    while (n) f *= n--;
    printf("%d", f);
}