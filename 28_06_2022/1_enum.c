#include <stdio.h>
// Creating custom data type bool.
enum bool {false, true};
//or
//typedef enum {false, true} bool;

int main() {
    enum bool x=false; // Declaration and initialization.
    //or
    //bool x=false; // with typedef
    if(x==true){  // Conditional statements.
        printf("The value of x is true");  
    } else {  
        printf("The value of x is false");
    }
    
    return 0;  
}

// Output: The value of x is false. 