#include <cstdio>
int main(int argc, char** argv) {
	long long a, b;
	while (scanf("%lld%lld", &a, &b) == 2) {
		printf("%lld\n\n", a + b);
	}
	return 0;
}