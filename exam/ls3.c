//WAP to check if the number is present or not (flag)
#include <stdio.h>
int main() {
    int arr[10], src, flag = 0;
    printf("Enter 10 numbers: \n");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter the number to search: ");
    scanf("%d", &src);
    for (int i = 0; i < 10; i++) {
        if (arr[i] == src) {
            flag = 1;
            break; 
        }
    } printf ("The number %d is %s\n", src, flag ? "present" : "not present");
    return 0;
}