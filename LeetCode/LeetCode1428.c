/**
 * //This is the BinaryMatrix's API interface.
 * //You should not implement it, or speculate about its implementation
 * struct BinaryMatrix {
 *		int (*get)(struct BinaryMatrix*, int, int);
 *		int* (*dimensions)(struct BinaryMatrix*);
 * };
 */
int leftMostColumnWithOne(struct BinaryMatrix* matrix) {
	int n = matrix->dimensions(matrix)[0];
	int m = matrix->dimensions(matrix)[1];
	int leftMostCol = m;
	for (int row = 0; row < n; row++) {
		while (matrix->get(matrix, row, leftMostCol - 1) == 1) {
			leftMostCol--;
			if (leftMostCol == 0) {
				return 0;
			}
		}
	}
	if (leftMostCol == m) {
		return -1;
	}
	return leftMostCol;
}