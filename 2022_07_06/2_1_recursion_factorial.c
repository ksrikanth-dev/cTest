#include <stdio.h>

int factorial(int num);

int main(){

    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    printf("The factorial of %d is: %d\n", n, factorial(n)); 

    return 0;

}

int factorial(int num){

    if (num == 1)
        // Exit condition
        return (1);
    else
        return (num * factorial(num - 1));

}