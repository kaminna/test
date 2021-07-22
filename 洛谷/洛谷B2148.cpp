#include <cstdio>
double f(double x, int n) {
	if (n == 1) {
		return x / (1 + x);
	}
	return x / (n + f(x, n - 1));
}
int main(int argc, char** argv) {
	double x;
	int n;
	scanf("%lf%d", &x, &n);
	printf("%.2lf", f(x, n));
	return 0;
}