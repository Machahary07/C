//wap in c to input a term and find the sum of rs of the term
#include <stdio.h>

int main() {
    int n, sum = 0, r;
    printf("Enter a number: ");
    scanf("%d", &n);

    while (n != 0) {
        r = n % 10; 
        sum += r;   
        n /= 10;        
    }

    printf("Sum of rs: %d\n", sum);
    return 0;
}