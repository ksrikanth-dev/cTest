// print sum of odd numbers between 0 and 10
#include <stdio.h>
int main ()
{
    int a,sum = 0;
    for (a = 0; a < 10; a++)
    {
        if ( a % 2 == 0 )
            continue;
        sum = sum + a;
    }
    printf("sum of odd numbers between 0 and 10 = %d",sum);
    return 0;
}