#include <stdio.h>

int main() {
    int n, i, max;
    printf("Enter number of elements in the array..");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the elements..");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);        
    }
    
    max = arr[0];
    for (i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }

    printf("The greatest integer is = %d\n", max);
    return 0;
}