#include <stdio.h>

int main() {
    int arr[5] = {5, 2, 8, 1, 3};

    // Bubble Sort
    for (int i = 0; i < 4; i++)
        for (int j = 0; j < 4 - i; j++)
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }

    printf("Median: %d\n", arr[2]); // Middle element after sorting
    return 0;
}
