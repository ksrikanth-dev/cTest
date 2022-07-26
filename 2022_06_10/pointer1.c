#include <stdio.h>

// int a[]
void modifyArray(int *a, int n)
{
    for(int i=0; i<10; i++)
        a[i] *= a[i];
}

int main() {
    int arr[10];

    for(int i=0; i<10; i++)
        arr[i] = i;
    
    modifyArray(arr, 10);

    for(int i=0; i<10; i++)
        printf("%d ", arr[i]);

    return 0;
}