int min2(int a, int b) {
	if (a < b) {
		return a;
	}
	return b;
}
int min3(int a, int b, int c) {
	return min2(min2(a, b), c);
}
int max2(int a, int b) {
	if (a > b) {
		return a;
	}
	return b;
}
int maximalSquare(char** matrix, int matrixSize, int* matrixColSize) {
	if (matrixSize == 0) {
		return 0;
	}
	int** maximalSquareBottomLeft = malloc((matrixSize + 1) * sizeof(int*));
	for (int row = 0; row <= matrixSize; row++) {
		maximalSquareBottomLeft[row] = calloc(matrixColSize[0] + 1, sizeof(int));
	}
	int answer = 0;
	for (int rows = 1; rows <= matrixSize; rows++) {
		for (int clos = 1; clos <= matrixColSize[0]; clos++) {
			if (matrix[rows - 1][clos - 1] == '1') {
				maximalSquareBottomLeft[rows][clos] = min3(maximalSquareBottomLeft[rows - 1][clos], maximalSquareBottomLeft[rows][clos - 1], maximalSquareBottomLeft[rows - 1][clos - 1]) + 1;
			}
			answer = max2(answer, maximalSquareBottomLeft[rows][clos]);
		}
	}
	for (int row = 0; row <= matrixSize; row++) {
		free(maximalSquareBottomLeft[row]);
	}
	free(maximalSquareBottomLeft);
	return answer * answer;
}