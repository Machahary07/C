#include <stdio.h>

int main() {
    int p, i;
    for (i=3; i > 0; i--) {
        printf("Enter Password: ");
        scanf("%d",&p);
        printf(p==500?"OK\n":"No, left: %d\n",i-1);
    }
}