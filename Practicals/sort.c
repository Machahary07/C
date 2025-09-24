//sort the array in descending order [72, 31, 4, 83, 25, 19, 92, 8]
//after sorting, add a new element in the middle of the array
// display the array

#include <stdio.h>

int main() {
    int arr[20] = {72, 31, 4, 83, 25, 19, 92, 8}; // initial array
    int n = 8;  // number of elements
    int i, j, temp, newElement;

    // Step 1: Sort in descending order (Bubble Sort)
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] < arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    // Step 2: Ask user for new element
    printf("Enter the new element to insert: ");
    scanf("%d", &newElement);

    int mid = n / 2;  // middle index

    // shift elements to the right
    for (i = n; i > mid; i--) {
        arr[i] = arr[i - 1];
    }

    arr[mid] = newElement;
    n++; // increase size of array

    // Step 3: Display the final array
    printf("Final array: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
