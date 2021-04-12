#include <stdio.h>
int main(int argc, char** argv) {
	long long n;
	while (~scanf("%lld", &n)) {
		if (n == 1) {
			n = 2;
		}
		printf("%lld\n", n);
	}
	return 0;
}