#include <cstdio>
int main(int argc, char** argv) {
	int n, flag = 1;
	double res = 0;
	scanf("%d", &n);
	for (int i = 1; i <= n; i++) {
		res += flag * 1.0 / i;
		flag *= -1;
	}
	printf("%.4lf", res);
	return 0;
}