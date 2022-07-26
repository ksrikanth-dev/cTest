// Program to print how many times a specific function is invoked.

#include <stdio.h>

int fun()
{
    static int count; // this line is executed only once no matter how many times fun() is invoked/called
    return ++count; // increment the count first and then return the value
}

int main() {
    printf("fun() is called %d times\n", fun());
    printf("fun() is called %d times\n", fun());
    printf("fun() is called %d times\n", fun());
    printf("fun() is called %d times\n", fun());
    printf("fun() is called %d times\n", fun());

    return 0;
}
