#include <cstdio>
int main(int argc, char** argv) {
	int m, n, sum = 0;
	scanf("%d%d", &m, &n);
	for (int i = m; i <= n; i++) {
		if (i % 17 == 0) {
			sum += i;
		}
	}
	printf("%d", sum);
	return 0;
}