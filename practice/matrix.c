#include <stdio.h>
int main() {
    int i;
    int j;
    for (i = 0; i<=3-1; i++) {
        for (j = 0; j<=5-1; j++) {
            printf("%d ", i+j);
        }
        printf("\n");
    }
}