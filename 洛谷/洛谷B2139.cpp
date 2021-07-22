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
		if (isPrime(i)) {
			int t = i, reverse = 0;
			while (t) {
				reverse += t % 10;
				t /= 10;
				reverse *= 10;
			}
			reverse /= 10;
			if (isPrime(reverse)) {
				if (flag) {
					printf(",");
				}
				printf("%d", i);
				flag = 1;
			}
			reverse = 0;
		}
	}
	if (flag == 0) {
		printf("No");
	}
	return 0;
}