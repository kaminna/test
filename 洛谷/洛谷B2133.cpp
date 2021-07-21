#include <cstdio>
int main(int argc, char** argv) {
	long long n, sum = 0;
	scanf("%lld", &n);
	for (int i = 1; ; i++) {
		sum += i;
		for (int j = 1; j <= i; j++) {
			if (sum - 3 * j == n) {
				printf("%d %d", j, i);
				return 0;
			}
		}
	}
	return 0;
}