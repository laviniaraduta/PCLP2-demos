#include <stdio.h>
#include <stdlib.h>

int x = 10;
double a;

int main() {
    int n = 10;
    int *array1 = malloc(n * sizeof(*array1));
    for (int i = 0; i < n; i++) {
        array1[i] = i * i;
    }
    x++;
    a = (double)10;

    for (int i = 0; i < n; i++) {
        printf("%d ", array1[i]);
    }

    free(array1);
    return 0;
}