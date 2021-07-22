#include <cstdio>
bool isPrime(long long x) {
	if (x <= 1) {
		return false;
	}
	for (long long i = 2; i*i <= x; i++) {
		if (x % i == 0) {
			return false;
		}
	}
	return true;
}
int main(int argc, char** argv) {
	int m, n, flag = 0;
	scanf("%d%d", &m, &n);
	for (int i = m; i <= n; i++) {
		for (int j = i; j > 0; j--) {
			if (isPrime(j) && i%j == 0) {
				if (flag) {
					printf(",");
				}
				printf("%d", j);
				flag = 1;
				break;
			}
		}
	}
	return 0;
}