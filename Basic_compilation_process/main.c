#include <stdio.h>
#include "utils.h"

int main() 
{
    int num = 10;
    int squared = square(num);
    printf("\nThe square of %d is------> %d\n", num, squared);
    return 0;
}