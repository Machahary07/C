//WAP to check whether the input number is even or odd.
#include <stdio.h>
int main() {
    int num;
    printf("Enter a number: \n");
    scanf("%d", &num);
    if (num % 2 == 0){
        printf("%d is even number.\n", num);
    } else {
        printf("%d is odd number.\n", num);
    }
    return 0;
}