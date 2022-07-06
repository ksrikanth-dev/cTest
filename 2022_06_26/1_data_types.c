#include <stdio.h>
#include <stdint.h>

int main(int argc, char *argv[]) {
    printf("a char is %ld bytes\n", sizeof(char));
    printf("an int is %ld bytes\n", sizeof(int));

    printf("an int8_t is %ld bytes\n", sizeof(int8_t));
    printf("an uint16_t is %ld bytes\n", sizeof(uint16_t));
    printf("an int32_t is %ld bytes\n", sizeof(int32_t));
    printf("an int64_t is %ld bytes\n", sizeof(int64_t));

    printf("a short int is %ld bytes\n", sizeof(short int));
    printf("a long int is %ld bytes\n", sizeof(long int));
    printf("a long is %ld bytes\n", sizeof(long));

    printf("a float is %ld bytes\n", sizeof(float));
    printf("a double is %ld bytes\n", sizeof(double));
    printf("a long double is %ld bytes\n", sizeof(long double));
    return 0;
}