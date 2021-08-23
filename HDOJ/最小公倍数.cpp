#include <cstdio>
int gcd(int n, int m) {
	return m ? gcd(m, n%m) : n;
}
int main(int argc, char** argv) {
	int n, m;
	while (scanf("%d%d", &n, &m) == 2) {
		printf("%d\n", n*m / gcd(n, m));
	}
	return 0;
}