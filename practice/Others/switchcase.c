#include <stdio.h>
int main() {
    int capacity, n = 0, choice, pos, val;
    int arr[100];  // maximum storage

    // Ask user for desired array size
    printf("Enter the maximum size of the array (1 to 100): ");
    scanf("%d", &capacity);

    if (capacity < 1 || capacity > 100) {
        printf("Invalid size. Please run again with a size between 1 and 100.\n");
        return 1;
    }

    while (1) {
        printf("\nMenu:\n");
        printf("1. Insert at beginning\n");
        printf("2. Insert at end\n");
        printf("3. Insert at position\n");
        printf("4. Delete from beginning\n");
        printf("5. Delete from end\n");
        printf("6. Delete from position\n");
        printf("7. Display array\n");
        printf("8. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:  // Insert at beginning
                if (n == capacity) {
                    printf("Array is full.\n");
                } else {
                    printf("Enter value: ");
                    scanf("%d", &val);
                    for (int i = n; i > 0; i--) {
                        arr[i] = arr[i - 1];
                    }
                    arr[0] = val;
                    n++;
                }
                break;

            case 2:  // Insert at end
                if (n == capacity) {
                    printf("Array is full.\n");
                } else {
                    printf("Enter value: ");
                    scanf("%d", &val);
                    arr[n++] = val;
                }
                break;

            case 3:  // Insert at any position
                if (n == capacity) {
                    printf("Array is full.\n");
                } else {
                    printf("Enter position (0 to %d): ", n);
                    scanf("%d", &pos);
                    if (pos < 0 || pos > n) {
                        printf("Invalid position.\n");
                    } else {
                        printf("Enter value: ");
                        scanf("%d", &val);
                        for (int i = n; i > pos; i--) {
                            arr[i] = arr[i - 1];
                        }
                        arr[pos] = val;
                        n++;
                    }
                }
                break;

            case 4:  // Delete from beginning
                if (n == 0) {
                    printf("Array is empty.\n");
                } else {
                    printf("Deleted %d\n", arr[0]);
                    for (int i = 1; i < n; i++) {
                        arr[i - 1] = arr[i];
                    }
                    n--;
                }
                break;

            case 5:  // Delete from end
                if (n == 0) {
                    printf("Array is empty.\n");
                } else {
                    printf("Deleted %d\n", arr[--n]);
                }
                break;

            case 6:  // Delete from any position
                if (n == 0) {
                    printf("Array is empty.\n");
                } else {
                    printf("Enter position (0 to %d): ", n - 1);
                    scanf("%d", &pos);
                    if (pos < 0 || pos >= n) {
                        printf("Invalid position.\n");
                    } else {
                        printf("Deleted %d\n", arr[pos]);
                        for (int i = pos + 1; i < n; i++) {
                            arr[i - 1] = arr[i];
                        }
                        n--;
                    }
                }
                break;

            case 7:  // Display
                if (n == 0) {
                    printf("Array is empty.\n");
                } else {
                    printf("Array contents: ");
                    for (int i = 0; i < n; i++) {
                        printf("%d ", arr[i]);
                    }
                    printf("\n");
                }
                break;

            case 8:  // Exit
                return 0;

            default:
                printf("Invalid choice. Try again.\n");
        }
    }
    return 0;
}
