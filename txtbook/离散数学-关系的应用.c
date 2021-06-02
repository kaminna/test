#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

char** CreateSet(int Row); //初始化并读入集合
int** InitMatrix(int Row, int Column); //初始化关系矩阵
void AssiganMatrix(int** R, char** A, char** B, char* x, char* y, int Row, int Column); //把一个关系对应到关系矩阵
void Composite(int** R, int** G, int a, int b, int c); //关系的复合运算（矩阵相乘）
int isReflexive(int** R, int Row); //是否自反
int isSymmetric(int** R, int Row); //是否对称
int isTransitive(int** R, int Row); //是否传递
void PrintMatrix(int** R, char** A, char** B, int Row, int Column); //打印关系矩阵
void FreeSet(char** Set, int Row); //释放集合
void FreeMatrix(int **R, int Row); //释放关系矩阵

int main(int argc, char** argv) {
	char operation;
	printf("The menu of function:\n");
	printf("1.Save and print a binary relationships\n");
	printf("2.The composite of two relations\n");
	printf("3.Judge the properties of relation\n");
	printf("4.Computing the transitive closure of a relation\n");
	printf("5.Judge the relation of equivalence relation\n");
	printf("Please choose the function what you want(press 0 to exit):");
	scanf("%c", &operation);

	while (operation != '0') {
		if (operation >= '1' && operation <= '5') {
			printf("\n");
			printf("The number of element in set A:");
			int a;
			scanf("%d", &a);

			printf("Please input set A:");
			char** A = CreateSet(a);

			printf("The number of element in set B:");
			int b;
			scanf("%d", &b);

			printf("Please input set B:");
			char** B = CreateSet(b);

			int **R = InitMatrix(a, b);

			printf("The number of relation from set A to set B:");
			int k;
			scanf("%d", &k);

			printf("Relation from set A to set B:\n");
			for (int i = 0; i < k; i++) {
				char x[12], y[12];
				scanf("%s%s", x, y);
				AssiganMatrix(R, A, B, x, y, a, b);
			}

			if (operation == '1') {
				printf("The matrix for R:\n");
				PrintMatrix(R, A, B, a, b);
				printf("\n");
			}

			if (operation == '2') {
				printf("The number of element in set C:");
				int c;
				scanf("%d", &c);

				printf("Please input set C:");
				char** C = CreateSet(c);

				int **G = InitMatrix(b, c);

				printf("The number of relation from set B to set C:");
				int p;
				scanf("%d", &p);

				printf("Relation from set B to set C:\n");
				for (int i = 0; i < p; i++) {
					char x[12], y[12];
					scanf("%s%s", x, y);
					AssiganMatrix(G, B, C, x, y, b, c);
				}

				printf("The matrix for R:\n");
				PrintMatrix(R, A, B, a, b);

				printf("The matrix for G:\n");
				PrintMatrix(G, B, C, b, c);

				printf("\n");

				FreeSet(C, c);
				FreeMatrix(G, b);
			}

			if (operation == '3') {

			}

			if (operation == '4') {

			}

			if (operation == '5') {

			}

			FreeSet(A, a);
			FreeSet(B, b);
			FreeMatrix(R, a);
		}
		else {
			printf("\n");
			printf("Error!\n");
			printf("\n");
		}
		printf("The menu of function:\n");
		printf("1.Save and print a binary relationships\n");
		printf("2.The composite of two relations\n");
		printf("3.Judge the properties of relation\n");
		printf("4.Computing the transitive closure of a relation\n");
		printf("5.Judge the relation of equivalence relation\n");
		printf("Please choose the function what you want(press 0 to exit):");
		getchar();//把回车读走
		scanf("%c", &operation);
	}
	return 0;
}

char** CreateSet(int Row) {
	char** Set = (char**)malloc(sizeof(char*) * Row);
	for (int i = 0; i < Row; i++) {
		Set[i] = (char*)malloc(sizeof(char) * 12);
	}
	for (int i = 0; i < Row; i++) {
		scanf("%s", Set[i]);
	}
	return Set;
}

int** InitMatrix(int Row, int Column) {
	int **R = (int **)malloc(sizeof(int*) * Row);
	for (int i = 0; i < Row; i++) {
		R[i] = (int *)calloc(Column, sizeof(int));
	}
	return R;
}

void AssiganMatrix(int** R, char** A, char** B, char* x, char* y, int Row, int Column) {
	for (int i = 0; i < Row; i++) {
		for (int j = 0; j < Column; j++) {
			if (strcmp(A[i], x) == 0 && strcmp(B[j], y) == 0) {
				R[i][j] = 1;
				return;
			}
		}
	}
}


void PrintMatrix(int** R, char** A, char** B, int Row, int Column) {
	printf("\\\t");
	for (int i = 0; i < Column; i++) {
		printf("%s\t", B[i]);
	}
	printf("\n");
	for (int i = 0; i < Row; i++) {
		printf("%s\t", A[i]);
		for (int j = 0; j < Column; j++) {
			printf("%d\t", R[i][j]);
		}
		printf("\n");
	}
}

void FreeSet(char** Set, int Row) {
	for (int i = 0; i < Row; i++) {
		free(Set[i]);
	}
	free(Set);
}

void FreeMatrix(int **R, int Row) {
	for (int i = 0; i < Row; i++) {
		free(R[i]);
	}
	free(R);
}