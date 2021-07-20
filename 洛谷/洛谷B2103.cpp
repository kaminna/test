#include <cstdio>
int main(int argc, char** argv) {
	int m, n, nums[100][100], val, cnt = 0;
	scanf("%d%d", &m, &n);
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			scanf("%d", &nums[i][j]);
		}
	}
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			scanf("%d", &val);
			if (val == nums[i][j]) {
				cnt++;
			}
		}
	}
	printf("%.2lf", 100.0 * cnt / (m*n));
	return 0;
}