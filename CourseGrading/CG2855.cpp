#include <cstdio>
int main(int argc, char** argv) {
	long long ans = 0, t;
	int a, n;
	scanf("%d%d", &a, &n);
	t = a;
	while (n--) {
		ans += t;
		a *= 10;
		t += a;
	}
	printf("%lld", ans);
	return 0;
}