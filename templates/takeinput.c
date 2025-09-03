#include <stdio.h>

int main() {
    int n; // size of the array

    // Ask user for the number of elements
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n]; // declare an array of size n

    // Input elements into the array
    for(int i = 0; i < n; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    // Print the array to check inputs
    printf("The array elements are: ");
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}