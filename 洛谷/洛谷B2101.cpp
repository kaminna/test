#include <cstdio>
int main(int argc, char** argv) {
	int m, n, val, sum = 0;
	scanf("%d%d", &m, &n);
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			scanf("%d", &val);
			if (i == 0 || i == m - 1 || j == 0 || j == n - 1) {
				sum += val;
			}
		}
	}
	printf("%d", sum);
	return 0;
}