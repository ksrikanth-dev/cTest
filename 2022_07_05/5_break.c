// Program to display integers until a specific number

#include<stdio.h>

int main()
{
    // Read in the user's favorite number
    int fav_num;
    printf("Enter your favorite number from 0 to 99: ");
    scanf("%d", &fav_num);
    
    int count = 0;
    while(1)
    {
        printf("\nThe value of count is %d.", count);
        if (count == fav_num)
    		break;
        count++;
    }
    return 0;
}