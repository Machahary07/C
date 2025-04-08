#include <stdio.h>

int main() {
    int i=3;
    int p;
    while (i>0) {
        printf("Enter password: ");
        scanf("%d",&p);
        if (p==123) {
            printf("correct password\n");
            break; //remove break for 3 attempts even if pw is correct
        } else {
            printf("Incorrect passwrord\n");
        }
        i--;
        printf("Attempts left: %d \n", i);
    }
    printf("End of program\n");
    return 0;
}