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
	int n, temp = 0, cnt = 0;
	scanf("%d", &n);
	for (int i = 11; i <= n; i++) {
		if (isPrime(i)) {
			int j = i;
			while (j) {
				temp += j % 10;
				j /= 10;
				temp *= 10;
			}
			temp /= 10;
			if (temp == i) {
				cnt++;
			}
			temp = 0;
		}
	}
	printf("%d", cnt);
	return 0;
}