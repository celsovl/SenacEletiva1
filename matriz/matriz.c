#include <stdio.h>
#include "matriz.h"

matriz_t* matriz_criar(int linhas, int colunas) {
	int tamanho = linhas * colunas * sizeof(double);
	matriz_t *nova = (matriz_t *)malloc(sizeof(matriz_t));
	nova->linhas = linhas;
	nova->colunas = colunas;
	nova->dados = (double *)malloc(tamanho);
	memset(nova->dados, 0, tamanho);
	return nova;
}

void matriz_setar(matriz_t *m, int linha, int coluna, double valor) {
	if (0 <= linha && linha < m->linhas && 0 <= coluna && coluna < m->colunas)
		m->dados[linha * m->colunas + coluna] = valor;
}

double matriz_getar(matriz_t *m, int linha, int coluna) {
	if (0 <= linha && linha < m->linhas && 0 <= coluna && coluna < m->colunas)
		return m->dados[linha * m->colunas + coluna];

	return 0;
}

void matriz_exibir(matriz_t *m) {
	int i, j;
	for (i = 0; i < m->linhas; i++) {
		for (j = 0; j < m->colunas; j++) {
			printf("%8.2f", matriz_getar(m, i, j));
		}

		printf("\n");
	}
}

void matriz_destruir(matriz_t *m) {
	free(m->dados);
	free(m);
}

matriz_t *matriz_transpor(matriz_t *m) {
	matriz_t *t = matriz_criar(m->linhas, m->colunas);
	int i, j;
	for (i = 0; i < m->linhas; i++) {
		for (j = 0; j < m->colunas; j++) {
			matriz_setar(t, j, i, matriz_getar(m, i, j));
		}
	}

	return t;
}
