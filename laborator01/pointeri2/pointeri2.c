#include <stdio.h>
#include <stdlib.h>
 
#define ARR_LENGTH 5
 
int main()
{
   int *arr, i;
 
   arr = (int *)malloc(sizeof(int) * ARR_LENGTH);
   // arr = (int *)calloc(ARR_LENGTH, sizeof(int));
 
   for (i = 0; i < ARR_LENGTH; ++i) {
       /*
        * arr + i iterează prin adresele fiecărui element din tablou
        * adresa arr + i nu crește cu i ci cu i * sizeof(int), arr fiind un pointer la int
        * în C nu se vede și nu este necesară această operație
        * dar mai târziu în limbajul de asamblare va fi necesar 
        */
       printf("arr[%d] = %d -  la adresa %p\n", i, *(arr + i), arr + i);
   }
 
   free(arr);
   return 0;
}