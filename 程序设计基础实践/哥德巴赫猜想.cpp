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
	for (int i = 4; i <= n; i += 2) {
		for (int j = 2; j < i; j++) {
			if (isPrime(j) && isPrime(i - j)) {
				printf("%d=%d+%d\n", i, j, i - j);
				break;
			}
		}
	} 
	return 0;
}

