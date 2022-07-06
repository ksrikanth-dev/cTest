// program to find sum of digits of a number
#include<stdio.h>

int main()
{
    int n, num, sum = 0, remainder;

    printf("Enter a number: ");
    scanf("%d", &n);

    num = n;

    do
    {
        remainder = n % 10;   // get the last digit of n
        sum += remainder;     // add the remainder to the sum
        n /= 10;              // remove the last digit from n
    }while( n > 0 );    // keep looping while n > 0

    printf("Sum of digits of %d is %d", num, sum);

    // signal to operating system everything works fine
    return 0;
}