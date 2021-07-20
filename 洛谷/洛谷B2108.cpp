#include <cstdio>
#include <cmath>
int main(int argc, char** argv) {
	int n, m, nums[100][100];
	double ans[100][100];
	scanf("%d%d", &n, &m);
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			scanf("%d", &nums[i][j]);
			ans[i][j] = nums[i][j];
		}
	}
	for (int i = 1; i < n - 1; i++) {
		for (int j = 1; j < m - 1; j++) {
			ans[i][j] = 0.2 * (nums[i][j] + nums[i - 1][j] + nums[i + 1][j] + nums[i][j - 1] + nums[i][j + 1]);
			ans[i][j] = round(ans[i][j]);
		}
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			printf("%.lf ", ans[i][j]);
		}
		printf("\n");
	}
	return 0;
}