#include <stdio.h>
#include "matriz.h"

void main()
{
	int i, j;
	matriz_t *m = matriz_criar(5, 5);
	for (i = 0; i < 5; i++)
		for (j = 0; j < 5; j++)
			matriz_setar(m, i, j, 2*i+j);

	printf("Matriz:\n");
	matriz_exibir(m);

	printf("\nMatriz transposta:\n");
	matriz_t *t = matriz_transpor(m);
	matriz_exibir(t);

	matriz_destruir(m);
	matriz_destruir(t);
}