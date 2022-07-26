#include <stdio.h>

int main(void) 
{
    auto int count = 5; // same as int count = 5;
    for (int i = 0; i < 5; ++i) {
        printf("C programming");
    }
  
    // Error: i is not available/accessible at this point. 
    // since it's local to for loop with automatic storage class,
    // it's destroyed when control moved out of for loop
    printf("%d", i);

    return 0;
}