#include <stdio.h>
 
int main()
{
    int v;
    int *p;  /* pointer la un întreg pe 32 biți */
    int **pp;  /* pointer la un pointer care conține conține adresa unui întreg pe 32 biți */
 
    /* Pentru a accesa adresa unei variabile în C se folosește operatorul &(referențiere) */
    p = &v;  /* p conține adresa valorii v */
    pp = &p;  /* pp conține adresa adresei valorii v */
 
    v = 420;
    /* Pentru a accesa valoarea de la adresa memorată de un pointer se folosește operatorul *(dereferențiere) */
    printf("v(%d) - *p(%d) - **pp(%d)\n", v, *p, *(*pp));  /* se va afișa v(420) - *p(420) - **pp(420) */
 
    return 0;
}