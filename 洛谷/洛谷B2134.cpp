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
	long long s;
	scanf("%lld", &s);
	for (long long i = s/2; i >= 2; i--) {
		if (isPrime(i) && isPrime(s-i)) {
			printf("%lld\n", i*(s-i));
			return 0;
		}
	}
	return 0;
}