//WAP in C to input a number and print the reverse of that input number. For example, if the input is 1234, the output should be 4321.
#include <stdio.h>
int main() {
    int num, reversedNum = 0, remainder;
    printf("Enter an integer: ");
    scanf("%d", &num);
    
    while (num != 0) {
        remainder = num % 10;
        reversedNum = reversedNum * 10 + remainder;
        num /= 10;
    }
    
    printf("Reversed Number: %d\n", reversedNum);
    return 0;
}