#include <cstdio>
int main(int argc, char** argv) {
	long long a, b;
	while (scanf("%lld%lld", &a, &b) == 2) {
		if (a == 0 && b == 0) break;
		printf("%lld\n", a + b);
	}
	return 0;
}