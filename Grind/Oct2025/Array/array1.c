#include <stdio.h>

int main() {
    int numbers[10];

    //Assigning values to the array
    numbers[0]=5;
    numbers[1]=10;
    numbers[2]=15;
    numbers[3]=20;
    numbers[4]=25;
    numbers[5]=30;
    numbers[6]=35;  
    numbers[7]=40;
    numbers[8]=45;
    numbers[9]=50;

    //Printing the array elements
    printf("First element of the array: %d\n", numbers[0]);
    printf("Second element of the array: %d\n", numbers[1]);

    return 0;
}

//Output:
// First element of the array: 5
// Second element of the array: 10