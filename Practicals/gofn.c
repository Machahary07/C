#include <stdio.h>

int main() {
    int i,n,max;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements in the array: ", n);

    for (i=0; i<n; i++) {
        scanf("%d", &arr[i]);
    }

    max = arr[0]; // Initialize 'max' with the first element of the array

    for (i=1; i<n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }

    printf("The greatest integer is = %d\n", max);
    return 0;
}