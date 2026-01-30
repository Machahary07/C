//WAP in cpp to input the value of a dividend and a divisor and print the quotient and remainder.

#include <stdio.h>
using namespace std;

int main() {
    int dividend, divisor, quotient, remainder;

    printf("Enter dividend: ");
    scanf("%d", &dividend);
    printf("Enter divisor: ");
    scanf("%d", &divisor);

    quotient = dividend / divisor;
    remainder = dividend % divisor;

    printf("Quotient: %d\n", quotient);
    printf("Remainder: %d\n", remainder);

    return 0;
}

//example
//Input:
//Enter dividend: 10
//Enter divisor: 3
//Output:
//Quotient: 3
//Remainder: 1