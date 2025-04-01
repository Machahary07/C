//WAP to find the frequency of a searched no. within a domain of 10 numbers using array and ask the user for the 10 numbers input also.
#include <stdio.h>
int main() {
    int arr[10], src, ctr = 0;
    printf("Enter 10 numbers: \n");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter the number to search: ");
    scanf("%d", &src);
    for (int i = 0; i < 10; i++) {
        if (arr[i] == src) {
            ctr++;
        }
    } printf ("The frequency of %d is %d\n", src, ctr);
    return 0;
}