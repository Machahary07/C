// greatest of 3 numbers
#include <stdio.h>
int main() {
    int n, i, max;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the elements of the array:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    max = arr[0]; // Assume the first element is the largest
    for (i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    printf ("The greatest of the numbers is: %d\n", max);
    return 0;
}