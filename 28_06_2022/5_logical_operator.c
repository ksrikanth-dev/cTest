#include <stdio.h>  
#include<stdbool.h>  
int main() {  
    // Declaring and initializing bool types.
    bool A=false;   
    bool B=true;  
 
    // Evaluating logical && operator.
    printf("The value of A&&B is %d", A&&B);
    // Output: The value of A&&B is 0 
 
    // Evaluating logical || operator.
    printf("\nThe value of A||B is %d", A||B);  
    // Output: The value of A||B is 1
 
    // Evaluating logical ! operator.
    printf("\nThe value of !A is %d", !A);
    // Output: The value of !A is 1
 
    return 0;  
}