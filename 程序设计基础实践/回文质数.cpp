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

int Reverse(int x) {
	if (x < 10) {
		return x;
	}
	int rever = 0;
	while (x) {
		rever += x%10;
		rever *= 10;
		x /= 10;
	}
	rever /= 10;
	return rever;
}

int main() {
	int a, b;
	scanf("%d%d", &a, &b);
	for (int i = a; i <= b; i++) {
		if (isPrime(i)) {
			if (Reverse(i) == i) {
				printf("%d\n", i);
			}
		}
	}
	return 0;
}

