#include <cstdio>
int main(int argc, char** argv) {
	int n;
	while (scanf("%d", &n) == 1) {
		long long nums, ans = 0;
		for (int i = 0; i < n; i++) {
			scanf("%lld", &nums);
			ans += nums;
		}
		printf("%lld\n", ans);
	}
	return 0;
}