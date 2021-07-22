#include <cstdio>
int A(int m, int n) {
	if (m == 0) {
		return n + 1;
	}
	if (m > 0 && n == 0) {
		return A(m - 1, 1);
	}
	return A(m - 1, A(m, n - 1));
}
int main(int argc, char** argv) {
	int m, n;
	scanf("%d%d", &m, &n);
	printf("%d", A(m, n));
	return 0;
}