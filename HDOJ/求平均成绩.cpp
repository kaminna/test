#include <cstdio>
#include <cstring>
double nums[51][6];
int main(int argc, char** argv) {
	int n, m;
	while (scanf("%d%d", &n, &m) == 2) {
		memset(nums, 0, sizeof(nums));
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) {
				scanf("%lf", &nums[i][j]);
				nums[i][5] += nums[i][j];
				nums[50][j] += nums[i][j];
			}
			nums[i][5] /= m;
		}
		for (int i = 0; i < m; i++) {
			nums[50][i] /= n;
		}
		for (int i = 0; i < n; i++) {
			if (i) printf(" ");
			printf("%.2lf", nums[i][5]);
		}
		printf("\n");
		for (int i = 0; i < m; i++) {
			if (i) printf(" ");
			printf("%.2lf", nums[50][i]);
		}
		printf("\n");
		for (int i = 0; i < n; i++) {
			int flag = 1;
			for (int j = 0; j < m; j++) {
				if (nums[50][j] > nums[i][j]) {
					flag = 0;
					break;
				}
			}
			if (flag) {
				nums[50][5]++;
			}
		}
		printf("%.lf\n\n", nums[50][5]);
	}
	return 0;
}