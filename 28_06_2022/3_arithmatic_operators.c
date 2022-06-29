// Examples of arithmetic operators in C

#include <stdio.h>

int main()

{

    int a = 7,b = 5, c;    

    c = a+b;

    printf("a+b = %d \n",c);

    c = a-b;

    printf("a-b = %d \n",c);

    c = a*b;

    printf("a*b = %d \n",c);

    c = a/b;

    printf("a/b = %d \n",c);

    c = a%b;

    printf("Remainder when a is divided by b = %d \n",c);   

    return 0;

}

/*
// When either one of the operands is a floating-point number: 

Suppose float a = 7.0, b = 2.0, c = 5, d = 3; the output will be:

a/b = 3.50  

a/d = 2.33 

c/b = 1.66  

// when both operands are integers 

c/d = 1

% can't be used with float numbers
*/