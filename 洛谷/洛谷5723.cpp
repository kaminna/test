#include <cstdio>
bool isPrime(int n) {
	if (n <= 1) {
		return false;
	}
	for (int i = 2; i*i <= n; i++) {
		if (n%i == 0) {
			return false;
		}
	}
	return true;
}
int main(int argc, char** argv) {
	int L, ans = 0;
	scanf("%d", &L);
	if (L <= 1) {
		printf("0");
		return 0;
	}
	for (int i = 2;; i++) {
		if (isPrime(i)) {
			L -= i;
			if (L >= 0) {
				printf("%d\n", i);
				ans++;
			}
			else {
				break;
			}
		}
	}
	printf("%d", ans);
	return 0;
}