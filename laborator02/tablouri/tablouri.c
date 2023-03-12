#include <stdio.h>
#include <stdlib.h>
 
int main() {
	int nrows = 10, ncols = 10;
	// alocam un array de pointeri la fiecare linie
	int **array1 = malloc(nrows * sizeof(*array1));
	for (int i = 0; i < nrows; i++) {
		array1[i] = malloc(ncols * sizeof(**array1));
	}

	printf("array1 linia 0 = %p, linia 1 = %p, linia1-linia0 = %d\n", array1[0], array1[1], array1[1] - array1[0]);
	// pastram array-ul intr-o zona continua de memorie
	int **array2 = malloc(nrows * sizeof(*array2));
	array2[0] = malloc(nrows * ncols * sizeof(**array2));
	for (int i = 1; i < nrows; i++) {
		array2[i] = array2[0] + i * ncols;
	}
	printf("array2 linia 0 = %p, linia 1 = %p, linia1-linia0 = %d\n", array2[0], array2[1], array2[1] - array2[0]);

	for (int i = 0; i < nrows; i++) {
		for (int j = 0; j < ncols; j++) {
			array1[i][j] = i * j;
			array2[i][j] = i * j;
		}
	}

	/*
	* printam elementul de pe pozitia 5, 7
	* putem accesa elementul in 2 moduri:
	* 		- folosind operatorul de indexare []
	* 		- folosind pointeri: *(*(array + i) + j)
	*/ 
	printf("array1[5][7] = %d = %d\n", array1[5][7], *(*(array1 +5) + 7));
	printf("array2[5][7] = %d = %d\n", array2[5][7], *(*(array2 +5) + 7));
	

	for (int i = 0; i < nrows; i++) {
		free(array1[i]);
	}
	free(array1);

	
	free(array2[0]);
	free(array2);
	return 0;
}