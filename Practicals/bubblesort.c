//WAP to ask user to input an array of size 10 
//enter 10 variables to the array
//sort the array using bubble sort then add a new element at the beginning 
//then display the initial & final array.
#include <stdio.h>

int main() {
    int arr[20];   // allow extra space for new element
    int n = 10;    // initial size = 10
    int i, j, temp, newElement;

    // Step 1: Ask user to input array of size 10
    printf("Enter 10 integers (separated by spaces):\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Display initial array
    printf("\nInitial array: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Step 2: Sort array using Bubble Sort (ascending)
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    // Display sorted array
    printf("\nSorted array: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Step 3: Ask for new element
    printf("\nEnter the new element to insert at the beginning: ");
    scanf("%d", &newElement);

    // Shift all elements to the right
    for (i = n; i > 0; i--) {
        arr[i] = arr[i - 1];
    }
    arr[0] = newElement;
    n++; // array size increased

    // Step 4: Display final array
    printf("\nFinal array after inserting %d at beginning: ", newElement);
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
