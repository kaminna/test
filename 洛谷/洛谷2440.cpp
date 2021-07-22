#include <cstdio>
int main(int argc, char** argv) {
	long long n, k, nums[100000], max = 0;
	scanf("%lld%lld", &n, &k);
	for (long long i = 0; i < n; i++) {
		scanf("%lld", &nums[i]);
		if (nums[i] > max) {
			max = nums[i];
		}
	}
	long long left = 0, right = max;
	while (left+1 < right) {
		long long mid = (left + right) / 2, cnt = 0;
		for (long long i = 0; i < n; i++) {
			cnt += nums[i] / mid;
		}
		if (cnt >= k) {
			left = mid;
		}
		else if (cnt < k) {
			right = mid;
		}
	}
	printf("%lld", left);
	return 0;
}