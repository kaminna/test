#include <cstdio>
#include <cmath>
bool isPrime(long long x) {
	if (x <= 0) {
		return false;
	}
	if (x == 1) {
		return false;
	}
	for (long long i = 2; i < sqrt(x); i++) {
		if (x % i == 0) {
			return false;
		}
	}
	return true;
}

int main() {
	long long n;
	scanf("%lld", &n);
	for (long long i = 2; i <= n; i++) {
		if (isPrime(i)) {
			printf("%lld ", i);
		}
	}
	return 0;
}

