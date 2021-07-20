#include <cstdio>
#include <cstdlib>
int** InitMatrix(int Row, int Column) {
	int **R = (int **)malloc(sizeof(int*) * Row);
	for (int i = 0; i < Row; i++) {
		R[i] = (int *)calloc(Column, sizeof(int));
	}
	return R;
}
int** Composite(int** R, int** G, int a, int b, int c) {
	int** M = InitMatrix(a, c);
	for (int i = 0; i < a; i++) {
		for (int j = 0; j < c; j++) {
			for (int k = 0; k < b; k++) {
				M[i][j] += R[i][k] * G[k][j];
			}
		}
	}
	return M;
}
void FreeMatrix(int **R, int Row) {
	for (int i = 0; i < Row; i++) {
		free(R[i]);
	}
	free(R);
}
int main(int argc, char** argv) {
	int n, m, k;
	scanf("%d%d%d", &n, &m, &k);
	int **R = InitMatrix(n, m);
	int **G = InitMatrix(m, k);
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			scanf("%d", &R[i][j]);
		}
	}
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < k; j++) {
			scanf("%d", &G[i][j]);
		}
	}
	int **M = Composite(R, G, n, m, k);
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < k; j++) {
			printf("%d ", M[i][j]);
		}
		printf("\n");
	}
	FreeMatrix(R, n);
	FreeMatrix(G, m);
	FreeMatrix(M, n);
	return 0;
}