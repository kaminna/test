#include <cstdio>
#include <cmath>
int main(int argc, char** argv) {
	int m;
	double n;
	while (scanf("%lf%d", &n, &m) == 2) {
		double ans = 0;
		while (m--) {
			ans += n;
			n = sqrt(n);
		}
		printf("%.2lf\n", ans);
	}
	return 0;
}