#include <cstdio>
int Hermite(int n, int x) {
	if (n == 0) {
		return 1;
	}
	if (n == 1) {
		return 2 * x;
	}
	return 2 * x * Hermite(n - 1, x) - 2 * (n - 1)*Hermite(n - 2, x);
}
int main(int argc, char** argv) {
	int n, x;
	scanf("%d%d", &n, &x);
	printf("%d", Hermite(n, x));
	return 0;
}