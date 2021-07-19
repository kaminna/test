#include <cstdio>
int main(int argc, char** argv) {
	int n, nums[100], cnt = 1, maxcnt = 1;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &nums[i]);
	}
	for (int i = 0; i+1 < n; i++) {
		if (nums[i] == nums[i+1]) {
			cnt++;
		}
		else {
			if (cnt > maxcnt) {
				maxcnt = cnt;
			}
			cnt = 1;
		}
	}
	printf("%d", maxcnt);
	return 0;
}
