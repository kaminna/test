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
	long long x, y, cnt = 0;
	scanf("%lld%lld", &x, &y);
	if (x > y) {
		long long temp = x;
		x = y;
		y = temp;
	}
	for (long long i = x; i <= y; i++) {
		if (isPrime(i)) {
			cnt++;
		}
	}
	printf("%lld", cnt);
	return 0;
}