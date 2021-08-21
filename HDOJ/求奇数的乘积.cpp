#include <cstdio>
int main(int argc, char** argv) {
	int n, nums;
	while (scanf("%d", &n) == 1) {
		int ans = 1;
		for (int i = 0; i < n; i++) {
			scanf("%d", &nums);
			if (nums & 1) {
				ans *= nums;
			}
		}
		printf("%d\n", ans);
	}
	return 0;
}