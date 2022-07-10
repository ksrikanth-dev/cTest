#include <stdio.h>

// Function declaration
int max_Num(int, int);

int main(void){

    int x = 15, y = 20;
    
    // Calling the function to find the greater number among the two
    int m = max_Num(x, y);  

    printf("The bigger number is %d", m);

    return 0;

}

// Function definition
int max_Num(int i, int j){
    if (i > j)
      return i;
    else
      return j;

}