//WAP to find the frequency of a searched no. within a domain of 10 numbers dom[10]={100,200,100,-200,100,500,600,100,200,300} using array
#include <stdio.h>
int main() {
    int dom[10]={100,200,100,-200,100,500,600,100,200,300};
    int src, ctr = 0;
    printf("Enter the number to search: ");
    scanf("%d", &src);
    for (int i = 0; i < 10; i++) {
        if (dom[i] == src) {
            ctr++;
        }
    }printf ("The frequency of %d is %d\n", src, ctr);
    return 0;
}