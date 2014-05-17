#ifndef HEADER_MATRIZ_H
#define HEADER_MATRIZ_H

typedef struct matriz
{
	int linhas, colunas;
	double *dados;
} matriz_t;

matriz_t* matriz_criar(int linhas, int colunas);
void matriz_setar(matriz_t *m, int linha, int coluna, double valor);
double matriz_getar(matriz_t *m, int linha, int coluna);
void matriz_exibir(matriz_t *m);
void matriz_destruir(matriz_t *m);
matriz_t *matriz_transpor(matriz_t *m);

#endif