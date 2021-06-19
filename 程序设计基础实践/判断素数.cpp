#include <cstdio>

bool isPrime(int x) {
	if (x <= 0) {
		return false;
	}
	if (x == 1) {
		return false;
	}
	for (int i = 2; i < x; i++) {
		if (x % i == 0) {
			return false;
		}
	}
	return true;
}

int main() {
	int n;
	scanf("%d", &n);
	for (int i = 2; i <= n; i++) {
		if (isPrime(i)) {
			printf("%d ", i);
		}
	}
	return 0;
}

