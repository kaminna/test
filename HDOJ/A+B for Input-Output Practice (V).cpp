#include <cstdio>
int main(int argc, char** argv) {
	int n, T;
	scanf("%d", &T);
	while (T--) {
		scanf("%d", &n);
		long long nums, ans = 0;
		for (int i = 0; i < n; i++) {
			scanf("%lld", &nums);
			ans += nums;
		}
		printf("%lld\n", ans);
	}
	return 0;
}