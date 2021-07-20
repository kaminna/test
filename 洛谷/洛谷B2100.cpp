#include <cstdio>
int main(int argc, char** argv) {
	int n, i, j;
	scanf("%d%d%d", &n, &i, &j);
	for (int clo = 1; clo <= n; clo++) {
		printf("(%d,%d) ", i, clo);
	}
	printf("\n");
	for (int row = 1; row <= n; row++) {
		printf("(%d,%d) ", row, j);
	}
	printf("\n");
	if (i > j) {
		for (int clo = 1; clo + i - j <= n; clo++) {
			printf("(%d,%d) ", clo + i - j, clo);
		}
	}
	else {
		for (int row = 1; row + j - i <= n; row++) {
			printf("(%d,%d) ", row, row + j - i);
		}
	}
	printf("\n");
	int row = i + j - 1;
	for (int row = i + j - 1; row > 0 && i + j - row <= n; row--) {
		if (row <= n && i + j - row <= n > 0) {
			printf("(%d,%d) ", row, i + j - row);
		}
	}
	return 0;
}