#include <cstdio>
#include <iostream>
#include <cstdlib>
#include <cstring>

using namespace std;
int** InitMatrix(int Row, int Column); //初始化关系矩阵
void Destroy(int **R, int n); //释放关系矩阵

int main(int argc, char** argv) {
	printf("How many elements in set A:");
	int n;
	scanf("%d", &n);

	printf("Please input set A:");
	char A[5000][12];
	for (int i = 0; i < n; i++) {
		scanf("%s", &A[i]);
	}

	printf("How many elements in set B:");
	int m;
	scanf("%d", &m);

	printf("Please input set B:");
	char B[5000][12];
	for (int i = 0; i < m; i++) {
		scanf("%s", &B[i]);
	}
	
	int **R = InitMatrix(n, m);

	printf("The number of relations from set A to set B:");
	int k;
	scanf("%d", &k);

	printf("Relation from set A to set B:\n");
	for (int i = 0; i < k; i++) {
		char x[12], y[12];
		scanf("%s%s", x, y);
		for (int t = 0; t < n; t++) {
			for (int r = 0; r < m; r++) {
				if (strcmp(A[t], x) == 0 && strcmp(B[r], y) == 0) {
					R[t][r] = 1;
					break;
				}
			}
		}
	}

	printf("The matrix for R:\n");
	printf("\\\t");
	for (int i = 0; i < m; i++) {
		printf("%s\t", B[i]);
	}
	printf("\n");
	for (int i = 0; i < n; i++) {
		printf("%s\t", A[i]);
		for (int j = 0; j < m; j++) {
			printf("%d\t", R[i][j]);
		}
		printf("\n");
	}

	Destroy(R, n);
	return 0;
}

int** InitMatrix(int Row, int Column) {
	int **R = (int **)malloc(sizeof(int*) * Row);
	for (int i = 0; i < Row; i++) {
		R[i] = (int *)calloc(Column, sizeof(int));
	}
	return R;
}

void Destroy(int **R, int n) {
	for (int i = 0; i < n; i++) {
		free(R[i]);
	}
	free(R);
}