// Examples of assignment operators

#include <stdio.h>

int main()

{

    int a = 7, b;

    b = a;      // b is 7

    printf("b = %d\n", b);

    b += a;     // b is 14 

    printf("b = %d\n", b);

    b -= a;     // b is 7

    printf("b = %d\n", b);

    b *= a;     // b is 49

    printf("b = %d\n", b);

    b /= a;     // b is 7

    printf("c = %d\n", b);

    b %= a;     // b = 0

    printf("b = %d\n", b);

    return 0;

}