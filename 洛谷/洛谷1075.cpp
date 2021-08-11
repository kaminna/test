#include <cstdio>
bool isPrime(long long n) {
	if (n < 2) {
		return false;
	}
	for (long long i = 2; i*i <= n; i++) {
		if (n%i == 0) {
			return false;
		}
	}
	return true;
}
int main(int argc, char** argv) {
	long long n;
	scanf("%lld", &n);
	for (long long i = 2; i*i <= n; i++) {
		if (isPrime(i) && (n%i == 0) && isPrime(n/i)) {
			printf("%lld", n/i);
			return 0;
		}
	}
	return 0;
}