// Program to relate two integers using =, > or < symbol

#include <stdio.h>
int main() {
    int number1, number2;
    printf("Enter two integers: ");
    scanf("%d %d", &number1, &number2);

    if(number1 == number2) { //checks if the two integers are equal.
        printf("Result: %d = %d",number1,number2);
    } else if (number1 > number2) { //checks if number1 is greater than number2.
        printf("Result: %d > %d", number1, number2);
    } else { //checks if both test expressions are false
        printf("Result: %d < %d",number1, number2);
    }

    return 0;
}