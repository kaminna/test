#include <cstdio>
int cnt[101];
int main(int argc, char** argv) {
	int n, nums[20000];
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &nums[i]);
		cnt[nums[i]]++;
	}
	for (int i = 0; i < n; i++) {
		if (cnt[nums[i]]) {
			printf("%d ", nums[i]);
			cnt[nums[i]] = 0;
		}
	}
	return 0;
}
