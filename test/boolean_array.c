#include <stdio.h>  
#include <stdbool.h>  // As we are using boolean data type.
int main(){  
    bool bool_arr[5]; // Declaration of boolean array. 
    
    // Initialization of boolean array. 
    for (int i = 0; i < 5; i++) {
        if (i%2 == 0) {
            bool_arr[i] = true;
        } else {
            bool_arr[i] = false;
        }
    }
    
    // Printing elements of boolean array. 
    for (int i = 0; i < 5; i++) {  
        printf("%d,",bool_arr[i]);
    }  
    
    //Output: 1 0 1 0 1
    return 0;  
}