#include <cstdio>
int digit(int n, int k) {
	if (k == 1) {
		return n % 10;
	}
	return digit(n / 10, k - 1);
}
int main(int argc, char** argv) {
	int n, k;
	scanf("%d%d", &n, &k);
	printf("%d\n", digit(n, k));
	/*
	while (--k) {
		n /= 10;
	}
	printf("%d", n % 10);
	*/
	return 0;
}