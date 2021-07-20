#include <cstdio>
int main(int argc, char** argv) {
	int n, m, nums[100][100];
	scanf("%d%d", &n, &m);
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			scanf("%d", &nums[i][j]);
		}
	}
	for (int i = 0; i < m; i++) {
		for (int j = n - 1; j >= 0; j--) {
			printf("%d ", nums[j][i]);
		}
		printf("\n");
	}
	return 0;
}