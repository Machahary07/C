// #include <stdio.h>

// int main () {
//     int n;
//     printf("n = ");
//     scanf("%d", &n);

//     int s = n / 2;
//     for (int i = 1; i <= n; i += 2) {
//         for (int j = 0; j < s; j++) printf("  ");
//         for (int j = 0; j < i; j++) printf("* ");
//         printf("\n");
//         s--;
//     }
//     return 0;
// }

#include <stdio.h>

int main () {
    int n;
    printf("n = ");
    scanf("%d", &n);

    int s = 0;
    for (int i = n; i >= 1; i--) {
        for (int j = 0; j < i; j++) printf("* ");
        printf("\n");
        s++;
    }
    return 0;
}
