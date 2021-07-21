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
	long long n, cnt = 0;
	scanf("%lld", &n);
	for (int i = 2; i <= n; i++) {
		if (isPrime(i)) {
			cnt++;
		}
	}
	printf("%lld", cnt);
	return 0;
}