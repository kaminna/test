#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

char** CreateSet(int Row); //初始化并读入集合
int** InitMatrix(int Row, int Column); //初始化关系矩阵
void AssiganMatrix(int** R, char** A, char** B, char* x, char* y, int Row, int Column); //把一个关系对应到关系矩阵
int** Composite(int** R, int** G, int a, int b, int c); //关系的复合运算(矩阵相乘)
int isReflexive(int** R, int Row); //是否自反
int isAntiReflexive(int** R, int Row); //是否反自反
int isSymmetric(int** R, int Row); //是否对称
int isAntiSymmetric(int** R, int Row); //是否反对称
int isTransitive(int** R, int Row); //是否传递
int** TransitiveClosures(int** R, int Row); //传递闭包
void Quotientset(int** R, int Row); //商集
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

			if (operation >= '1'&&operation <= '2') {

				printf("The number of element in set B:");
				int b;
				scanf("%d", &b);

				printf("Please input set B:");
				char** B = CreateSet(b);

				int **R = InitMatrix(a, b);

				printf("The number of relation from set A to set B:");
				int k;
				scanf("%d", &k);

				printf("Relation R from set A to set B:\n");
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

					printf("Relation G from set B to set C:\n");
					for (int i = 0; i < p; i++) {
						char x[12], y[12];
						scanf("%s%s", x, y);
						AssiganMatrix(G, B, C, x, y, b, c);
					}

					int** M = Composite(R, G, a, b, c);
					printf("The composite of R to G:\n ");
					PrintMatrix(M, A, C, a, c);

					printf("\n");

					FreeSet(B, b);
					FreeSet(C, c);
					FreeMatrix(G, b);
					FreeMatrix(M, a);
				}
				FreeMatrix(R, a);
			}
			if (operation >= '3' && operation <= '5') {
				int** R = InitMatrix(a, a);

				printf("The number of relation on set A:");
				int k;
				scanf("%d", &k);

				printf("Relation  R on set A:\n");
				for (int i = 0; i < k; i++) {
					char x[12], y[12];
					scanf("%s%s", x, y);
					AssiganMatrix(R, A, A, x, y, a, a);
				}

				printf("\n");

				printf("The matrix for R:\n");
				PrintMatrix(R, A, A, a, a);

				printf("\n");

				int flag_Reflexive = isReflexive(R, a);
				int flag_AntiReflexive = isAntiReflexive(R, a);
				int flag_Symmetric = isSymmetric(R, a);
				int flag_AntiSymmetric = isAntiSymmetric(R, a);
				int flag_Transitive = isTransitive(R, a);

				if (operation == '3') {
					if (flag_Reflexive) {
						printf("The relation R on the set A is reflexive.\n");
					}
					if (flag_AntiReflexive) {
						printf("The relation R on the set A is antireflexive.\n");
					}
					if (flag_Symmetric) {
						printf("The relation R on the set A is symmetric.\n");
					}
					if (flag_AntiSymmetric) {
						printf("The relation R on the set A is antiSymmetric.\n");
					}
					if (flag_Transitive) {
						printf("The relation R on the set A is transitive.\n");
					}

					printf("\n");

				}

				if (operation == '4') {
					printf("The transitive closure of relation R:\n");
					clock_t start, stop;
					start = clock();
					R = TransitiveClosures(R, a);
					stop = clock();
					PrintMatrix(R, A, A, a, a);
					printf("\n");
					printf("Cost %lf seconds\n", (double)(stop - start) / CLOCKS_PER_SEC);
					printf("\n");
				}

				if (operation == '5') {
					if (flag_Reflexive && flag_Symmetric && flag_Transitive) {
						printf("R is an equivalence relation.\n");
					}
				}
				FreeMatrix(R, a);
			}
			FreeSet(A, a);
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
		getchar();//把缓冲区的回车读走
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

int** Composite(int** R, int** G, int a, int b, int c) {
	int** M = InitMatrix(a, c);
	for (int i = 0; i < a; i++) {
		for (int j = 0; j <c; j++) {
			for (int k = 0; k < b; k++) {
				M[i][j] += R[i][k] * G[k][j];
				if (M[i][j] > 1) {
					M[i][j] = 1;
				}
			}
		}
	}
	return M;
}

int isReflexive(int** R, int Row) {
	int flag = 1;
	for (int i = 0; i < Row; i++) {
		if (R[i][i] == 0) {
			flag = 0;
			return flag;
		}
	}
	return flag;
}

int isAntiReflexive(int** R, int Row) {
	int flag = 1;
	for (int i = 0; i < Row; i++) {
		if (R[i][i]) {
			flag = 0;
			return flag;
		}
	}
	return flag;
}

int isSymmetric(int** R, int Row) {
	int flag = 1;
	for (int i = 0; i < Row; i++) {
		for (int j = 0; j < i; j++) {
			if (R[i][j] != R[j][i]) {
				flag = 0;
				return flag;
			}
		}
	}
	return flag;
}

int isAntiSymmetric(int** R, int Row) {
	int flag = 1;
	for (int i = 0; i < Row; i++) {
		for (int j = 0; j < Row; j++) {
			if (i == j) {
				continue;
			}
			if (R[i][j] == 1 && R[j][i] == 1) {
				flag = 0;
				return flag;
			}
		}
	}
	return flag;
}

int isTransitive(int** R, int Row) {
	int flag = 1;

	return flag;
}

int** TransitiveClosures(int** R, int Row) {
	for (int i = 0; i < Row; i++)
	{
		for (int j = 0; j < Row; j++)
		{
			if (R[j][i] == 1)
			{
				for (int k = 0; k < Row; k++)
				{
					R[j][k] = R[j][k] | R[i][k];
				}
			}
		}
	}
	return R;
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