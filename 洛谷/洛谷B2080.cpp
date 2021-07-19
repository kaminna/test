#include <cstdio>
int main(int argc, char** argv) {
	double x, temp = 1, ans = 1;
	int n;
	scanf("%lf%d", &x, &n);
	for (int i = 1; i <= n; i++) {
		temp *= x;
		ans += temp;
	}
	printf("%.2lf", ans);
	return 0;
}