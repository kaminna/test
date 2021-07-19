#include <cstdio>
int cnt[100001];
int main(int argc, char** argv) {
	int n, nums, maxn = 0;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &nums);
		cnt[nums]++;
		if (nums > maxn) {
			maxn = nums;
		}
	}
	for (int i = 0; i <= maxn; i++) {
		printf("%d\n", cnt[i]);
	}
	return 0;
}
