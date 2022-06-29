// Example of relational operators

#include <stdio.h>

int main()

{

    int x = 8, y = 10;

   printf("%d == %d is False(%d) \n", x, y, x == y);

   printf("%d != %d is True(%d) \n ", x, y, x != y);

   printf("%d > %d is False(%d)\n ",  x, y, x > y);

   printf("%d < %d is True (%d) \n", x, y, x < y);

   printf("%d >= %d is False(%d) \n", x, y, x >= y);

   printf("%d <= %d is True(%d) \n", x, y, x <= y);

    return 0;

}