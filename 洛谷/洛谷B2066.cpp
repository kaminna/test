#include <cstdio>
#include <cmath>
int main(int argc, char** argv) {
	int n, nums;
	double x, y, t = 0;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%lf%lf%d", &x, &y, &nums);
		t += sqrt(x*x + y * y) / 50 * 2 + nums * 1.5;
	}
	printf("%.lf", ceil(t));
	return 0;
}