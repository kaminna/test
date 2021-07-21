#include <cstdio>
#include <cmath>
bool isPrime(long long x) {
	if (x <= 0) {
		return false;
	}
	if (x == 1) {
		return false;
	}
	for (long long i = 2; i <= sqrt(x); i++) {
		if (x % i == 0) {
			return false;
		}
	}
	return true;
}
int main(int argc, char** argv) {
	int n, flag = 0;
	scanf("%d", &n);
	for (int i = 3; i + 2 <= n; i++) {
		if (isPrime(i) && isPrime(i + 2)) {
			printf("%d %d\n", i, i + 2);
			flag = 1;
		}
	}
	if (!flag) {
		printf("empty");
	}
	return 0;
}