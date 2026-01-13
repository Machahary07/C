//printing nos. 1 to n without loops (Using recursion)

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
    printNos(20);
    return 0;
}

// gcc program.c -o program
// ./program