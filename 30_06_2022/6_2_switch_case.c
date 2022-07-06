#include <stdio.h>
int main()
{
    int number=5;
    switch (number) {
        case 1:
        case 2:
        case 3:
            printf("The number is One or Two or Three.\n");
            break;
        case 4:
        case 5:
        case 6:
            printf("The number is Four or Five or Six.\n");
            break;
        default:
            printf("The number is Greater than Six.\n");
    }
}