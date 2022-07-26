/*
    * C program to accept an array of integers and delete the
    * first occurance of a specified integer from the array
*/

#include <stdio.h>

int main()
{
    int i, n, pos, element, found = 0;

    printf("Enter how many elements\n");
    scanf("%d", &n);
    int vectorx[n];

    printf("Enter the elements\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &vectorx[i]);
    }

    printf("Input array elements are\n");
    for (i = 0; i < n; i++)
    {
        printf("%d\n", vectorx[i]);
    }

    printf("Enter the element to be deleted\n");
    scanf("%d", &element);

    for (i = 0; i < n; i++)
    {
        if (vectorx[i] == element)
        {
            found = 1;
            pos = i;
            break;
        }
    }

    if (found == 1)
    {
        for (i = pos; i <  n - 1; i++)
        {
            vectorx[i] = vectorx[i + 1];
        }

        printf("The resultant vector is \n");
        for (i = 0; i < n - 1; i++)
        {
            printf("%d\n", vectorx[i]);
        }

    }
    else
        printf("Element %d is not found in the vector\n", element);

    return 0;
}