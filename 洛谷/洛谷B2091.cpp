#include <cstdio>
int main(int argc, char** argv) {
	int n, m, nums[1000], ans = 0;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &nums[i]);
	}
	for (int i = 0; i < n; i++) {
		scanf("%d", &m);
		ans += nums[i] * m;
	}
	printf("%d", ans);
	return 0;
}