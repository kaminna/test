int minPathSum(int** grid, int gridSize, int* gridColSize) {
	int M = gridSize;
	int N = gridColSize[0];
	int **cache = malloc(sizeof(int*) * 2);
	for (int i = 0; i < 2; i++) {
		cache[i] = calloc(N, sizeof(int));
	}
	for (int row = 0; row < M; row++) {
		for (int col = 0; col < N; col++) {
			if (row == 0 && col == 0) {
				cache[row % 2][col] = grid[0][0];
				continue;
			}
			int min = INT_MAX;
			if (row - 1 >= 0) {
				int upMin = cache[(row - 1) % 2][col];
				if (upMin < min) {
					min = upMin;
				}
			}
			if (col - 1 >= 0) {
				int leftMin = cache[row % 2][col - 1];
				if (leftMin < min) {
					min = leftMin;
				}
			}
			cache[row % 2][col] = min + grid[row][col];
		}
	}
	int result = cache[(M - 1) % 2][N - 1];
	for (int i = 0; i < 2; i++) {
		free(cache[i]);
	}
	free(cache);
	return result;
}