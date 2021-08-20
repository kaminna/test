#include <cstdio>
int main(int argc, char** argv) {
	int T;
	long long a, b;
	scanf("%d", &T);
	while (T--) {
		scanf("%lld%lld", &a, &b);
		printf("%lld\n", a + b);
	}
	return 0;
}