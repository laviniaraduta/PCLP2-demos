#include <stdio.h>

int main() {
    char character = 'a';
    short short_int = 313;
    int integer = 420;
    long long_int = 31337;
    long long long_long_int = 317800;
    float real = 3.14;
    double double_real = 3.14159265358979323846;
    
    int *pointer = &integer;
    short *short_pointer = &short_int;
    long *long_pointer = &long_int;
    long long *long_long_pointer = &long_long_int;
    float *float_pointer = &real;
    double *double_pointer = &double_real;
    char *char_pointer = &character;

    printf("size of character = %u; sizeof(char) = %u\n", sizeof(character), sizeof(char));
    printf("size of short_int = %u; sizeof(short) = %u\n", sizeof(short_int), sizeof(short));
    printf("size of integer = %u; sizeof(int) = %u\n", sizeof(integer), sizeof(int));
    printf("size of long_int = %u; sizeof(long) = %u\n", sizeof(long_int), sizeof(long));
    printf("size of long_long_int = %u; sizeof(long long) = %u\n", sizeof(long_long_int), sizeof(long long));
    printf("size of real = %u; sizeof(float) = %u\n", sizeof(real), sizeof(float));
    printf("size of double_real = %u; sizeof(double) = %u\n", sizeof(double_real), sizeof(double));
    printf("size of pointer = %u; sizeof(int *) = %u\n", sizeof(pointer), sizeof(int *));
    printf("size of short_pointer = %u; sizeof(short *) = %u\n", sizeof(short_pointer), sizeof(short *));
    printf("size of long_pointer = %u; sizeof(long *) = %u\n", sizeof(long_pointer), sizeof(long *));
    printf("size of long_long_pointer = %u; sizeof(long long *) = %u\n", sizeof(long_long_pointer), sizeof(long long *));
    printf("size of float_pointer = %u; sizeof(float *) = %u\n", sizeof(float_pointer), sizeof(float *));
    printf("size of double_pointer = %u; sizeof(double *) = %u\n", sizeof(double_pointer), sizeof(double *));
    printf("size of char_pointer = %u; sizeof(char *) = %u\n", sizeof(char_pointer), sizeof(char *));
}