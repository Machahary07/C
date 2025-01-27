#include <stdio.h>

int findSum(int n)
{
    if (n == 1)
        return 0;

    return n + findSum(n - 1);
}

int main()
{
    int n = 3;
    printf("%d", findSum(n));
    return 0;
}