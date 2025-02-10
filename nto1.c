// print n to 1 nos. without using loops (using recursion)

#include <stdio.h>

void printNos(unsigned int n)
{
    if(n > 0)
    {
        printf("%d ", n);
        printNos(n-1);
        
    }
    return;
}

int main()
{
    int n = 10;
    printNos(n);
    getchar();
    return 0;
}