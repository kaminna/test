#include <cstdio>
int main(int argc, char** argv) {
	int n, m, nums[100][100], val;
	scanf("%d%d", &n, &m);
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			scanf("%d", &nums[i][j]);
		}
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			scanf("%d", &val);
			nums[i][j] += val;
		}
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			printf("%d ", nums[i][j]);
		}
		printf("\n");
	}
	return 0;
}