#include <stdio.h>
int main(int argc, char** argv) {
	int n, flag = 1;
	double ans = 0;
	scanf("%d", &n);
	for (int i = 1; i <= n; i++) {
		ans += flag * i / (2.0 * i - 1);
		flag = -flag;
	}
	printf("%.3lf", ans);
	return 0;
}