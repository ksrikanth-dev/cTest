// program to sort the elements of an array in ascending order

#include <stdio.h>

void main()
{
    int n;

    printf("Enter how many elements \n");
    scanf("%d", &n);
    int array[n];

    printf("Enter the elements \n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }

    printf("Input array elements are \n");
    for (int i = 0; i < n; i++)
    {
        printf("%d\n", array[i]);
    }

    // Sorting the elements of the array
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (array[j] < array[i] )
            {
                int temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }

    printf("Sorted list is \n");
    for (int i = 0; i < n; i++)
    {
        printf("%d\n", array[i]);
    }
    
    return 0;
}