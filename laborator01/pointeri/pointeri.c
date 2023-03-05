#include <stdio.h>
 
int main()
{
    int a = 10;
    int *p = &a;
    int **q = &p;

    printf("a = %d - la adresa %p\n", a, &a);
    printf("p = %p - la adresa %p\n", p, &p);
    printf("q = %p - la adresa %p\n", q, &q);

    printf("a = %d - la adresa %p\n", *p, p);
    printf("p = %p - la adresa %p\n", *q, q);

    printf("a = %d - la adresa %p\n", **q, *q);

    return 0;
}