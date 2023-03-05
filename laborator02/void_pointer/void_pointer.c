#include <stdio.h>
 
void increment(void *data, int element_size) {
    /* Se verifică dacă datele introduse reprezinta un caracter */
	if (element_size == sizeof(char)) {
        /* void * nu poate fi dereferentiat, trebuie facut cast inainte */
		char *char_ptr = data;
 		++(*char_ptr);
	}
 
    /* Se verifică dacă datele introduse reprezinta un integer */
	if (element_size == sizeof(int)) {
		int *int_ptr = data;
		++(*int_ptr);
	}
}
 
int main() {
	char c = 'a';
	int x = 10;
 
	increment(&c, sizeof(c));
	increment(&x, sizeof(x));
 
	printf("%c, %d\n", c, x); /* Va avea ca rezultat: b, 11 */
	return 0;
}