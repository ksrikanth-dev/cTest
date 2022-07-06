/**********************************
C program to check if a number is 
a palindrome or not using iteration
e.g. 121 is palindrome, 123 is not.
***********************************/

#include <stdio.h>

int main() {
    // declare variables
    int n, m, rev = 0, digit;

    // take input of the number
    printf("Enter the number = ");
    scanf("%d", & n);

    // copy the number
    m = n;

    //find the reverse
    while (n != 0) {
        // extract the unit digit/last digit
        digit = n % 10;
        // store the reverse number
        // give appropriate positional value
        // of each digit
        rev = rev * 10 + digit;
        //divide the number by 10 to remove last digit
        n = n / 10;
    }

    // check for palindrome
    if (m == rev)
        printf("%d is a palindrome number!", m);
    else
        printf("%d is not a palindrome number!", m);

    return 0;
}