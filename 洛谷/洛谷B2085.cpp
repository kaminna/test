#include <cstdio>
#include <cmath>
#include <climits>
int nums[5000];
int isPrime(int n) {
	for (int i = 2; i <= (int)sqrt(n); i++) {
		if (n%i == 0) {
			return 0;
		}
	}
	return 1;
}
int main(int argc, char** argv) {
	int n, cnt = 0;
	scanf("%d", &n);
	for (int i = 2; i <= INT_MAX; i++) {
		if (isPrime(i)) {
			cnt++;
			if (cnt == n) {
				printf("%d", i);
				break;
			}
		}
	}
	return 0;
}