//WAP in c to input a number and print the multiplication table of that number

#include <stdio.h>

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    
    printf("Multiplication table of %d:\n", n);
    for (int i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", n, i, n * i);
    }
    
    return 0;
}