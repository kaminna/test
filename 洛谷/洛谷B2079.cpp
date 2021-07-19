#include <cstdio>
long long fac[20];
long long Fac(int n) {
	if (fac[n]) {
		return fac[n];
	}
	return fac[n] = fac[n - 1] * n;
}
int main(int argc, char** argv) {
	fac[0] = 1;
	double e = 1;
	int n;
	scanf("%d", &n);
	for (int i = 1; i <= n; i++) {
		e += 1.0 / Fac(i);
	}
	printf("%.10lf", e);
	return 0;
}