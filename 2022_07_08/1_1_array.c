/*
 * C program to read N integers into an array A and
 * a) Find the sum of all numbers
 * b) Find the average of all numbers
 * c) Find the largest of all the array elements
 * d) Find the smallest of all the array elements
 * Display the results with suitable headings
 */
 
#include <stdio.h>
 
int main()
{
    int size, i, largest, smallest, sum = 0;
    float average;

    printf("\n Enter the size of the array: ");
    scanf("%d", &size);
    int array[size]; // static array

    printf("\n Enter %d elements of  the array: \n", size);

    // reading elements into the array
    for (i = 0; i < size; i++)
    {   
        scanf("%d", &array[i]);
    }

    largest = array[0];
    smallest = array[0];
    sum = array[0];

    for (i = 1; i < size; i++) 
    {
        sum += array[i];

        if ( array[i] > largest )
            largest = array[i];
        if ( array[i] < smallest )
            smallest = array[i];
    }
    average = (float)sum/size;

    printf("\nSum of array elements is: %d", sum);
    printf("\nAverage of array elements is: %.3f", average);
    printf("\nLargest element present in the given array is: %d", largest);
    printf("\nSmallest element present in the given array is: %d", smallest);

    return 0;
}