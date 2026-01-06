#include <stdio.h>

int main() {
    int arr1[5] = {1, 2, 3, 4, 5}; // Full initialization
    int arr2[5] = {1, 2};          // Partial initialization (rest become 0)
    int arr3[] = {10, 20, 30};     // Size automatically determined as 3

    for (int i = 0; i < 5; i++) {
        printf("arr1[%d] = %d\n", i, arr1[i]);
    }

    return 0;
}

//Output:
// arr1[0] = 1
// arr1[1] = 2
// arr1[2] = 3
// arr1[3] = 4
// arr1[4] = 5