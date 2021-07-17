#include <cstdio>
int main(int argc, char** argv) {
	int m, n, nums, cnt = 0;
	scanf("%d%d", &m, &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &nums);
		if (m >= nums) {
			m -= nums;
		}
		else
		{
			cnt++;
		}
	}
	printf("%d", cnt);
	return 0;
}