const char WATER = '0';
const char LAND = '1';
const char NEW = 'X';
const char USED = 'O';
void floodFill(char** grid, int NUMBER_OF_ROWS, int NUMBER_OF_CLOS, int i, int j) {
	if (i < 0 || j < 0 || i >= NUMBER_OF_ROWS || j >= NUMBER_OF_CLOS || grid[i][j] != LAND) return;
	grid[i][j] = NEW;
	floodFill(grid, NUMBER_OF_ROWS, NUMBER_OF_CLOS, i + 1, j);
	floodFill(grid, NUMBER_OF_ROWS, NUMBER_OF_CLOS, i - 1, j);
	floodFill(grid, NUMBER_OF_ROWS, NUMBER_OF_CLOS, i, j + 1);
	floodFill(grid, NUMBER_OF_ROWS, NUMBER_OF_CLOS, i, j - 1);
}
int numIslands(char** grid, int gridSize, int* gridColSize) {
	if (gridSize == 0) return 0;
	const int NUMBER_OF_ROWS = gridSize;
	const int NUMBER_OF_CLOS = gridColSize[0];
	int numberOfIslands = 0;
	for (int i = 0; i < NUMBER_OF_ROWS; i++) {
		for (int j = 0; j < NUMBER_OF_CLOS; j++) {
			if (grid[i][j] == LAND) {
				floodFill(grid, NUMBER_OF_ROWS, NUMBER_OF_CLOS, i, j);
				for (int y = 0; y < NUMBER_OF_ROWS; y++) {
					for (int x = 0; x < NUMBER_OF_CLOS; x++) {
						if (grid[y][x] == NEW) {
							grid[y][x] == USED;
						}
					}
				}
				numberOfIslands++;
			}
		}
	}
	return numberOfIslands;
}