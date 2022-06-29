#include<stdio.h>
int main()
{
    int number = 10, *pointer;
    int another_number=13;
    pointer=&number;
    printf("Example of pointer and reference operator!\n");
    printf("Memory address: %d\n",pointer);
    printf("Example of condition operator!\n");
    (another_number>14)? (printf("It is greater than number 14!")) : (printf("It is less than number 14!"));
    // if you put the value 15 in another_number variable then it will output>> It is greater than number 14!
    return 0;
}