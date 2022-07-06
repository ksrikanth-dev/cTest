// Working of logical operators

#include <stdio.h>

int main()

{

    int a = 15, b = 15, c = 20, results;

    results = (a == b) && (c > b);

    printf("(a == b) && (c > b) is %d \n", results);

    results = (a == b) && (c < b);

    printf("(a == b) && (c < b) is %d \n", results);

    results = (a == b) || (c < b);

    printf("(a == b) || (c < b) is %d \n", results);

    results = (a != b) || (c < b);

    printf("(a != b) || (c < b) is %d \n", results);

    results = !(a != b);

    printf("!(a != b) is %d \n", results);

    results = !(a == b);

    printf("!(a == b) is %d \n", results);

    return 0;

}