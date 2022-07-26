// sample program using register storage class
#include <stdio.h>

int main()
{
    register int sum = 0; //sum is heavily used/very frequently accessed, hence kept in processor register

    for(int i=1; i<=10000; i++)
    {
        sum += i;
    }

    printf("Sum of first 10000 integers = %d", sum);

    return 0;
}