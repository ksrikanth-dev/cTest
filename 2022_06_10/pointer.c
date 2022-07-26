#include <stdio.h>

void swap(int *x, int *y)
{
    int t = *x;
    *x = *y;
    *y = t;
    //printf("x=%d, y=%d\n", x, y);
}

int main() {
    int a=3, b=4;
    swap(&a, &b);

    printf("a=%d, b=%d", a, b);

}