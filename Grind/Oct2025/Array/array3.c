#include <stdio.h>

int main() {
    int n;

    // Ask for number of elements
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n]; // declare array of size n

    // Input elements space-separated
    printf("Enter %d elements (space-separated): ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Print the elements
    printf("You entered: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    printf("\n");
    return 0;
}
