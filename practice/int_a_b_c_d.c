#include <stdio.h>
int main() {
    int a, b, c, d;
    int conditionMet = 0;
    printf("Enter four numbers: \n");
    scanf("%d %d %d %d", &a, &b, &c, &d);

    if (a > b) {
        if (c > d) {
            conditionMet = 1;
            printf("Condition 1 met\n");
        }
    }
    if (a <= b) {
        if (c <= d) {
            conditionMet = 1;
            printf("Condition 2 met\n");
        }
    } 
    if (a == b) {
        if (c > d) {
            conditionMet = 1;
            printf("Condition 3 met\n");
        }
        else {
            printf("Condtition 3 not met\n");
        }
    } 
    
    if (conditionMet == 0) {
        printf("No condition met\n");
    } return 0;
}