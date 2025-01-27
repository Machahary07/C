#include <stdio.h>

// Recursive function to find the sum of 15
// numbers from 0 to n
int findSum(int n)
{
    // Base case 
    if (n == 0) 
        return 0; 
  
    // Recursive case 
    return n + findSum(n - 1);
}

int main()
{
    int n = 5;
    printf("%d", findSum(n));
    return 0;
}