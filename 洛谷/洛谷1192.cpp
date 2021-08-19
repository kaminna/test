#include <cstdio>
const int mod = 100003;
long long nums[100000];
long long SUM(long long *nums, int star, int end) {
	long long res = 0;
	for (int i = star; i <= end; i++) {
		res += nums[i] % mod;
	}
	return res;
}
int main(int argc, char** argv) {
	nums[0] = 1;
	nums[1] = 2;
	int n, k;
	scanf("%d%d", &n, &k);
	if (k == 1) {
		printf("1");
		return 0;
	}
	for (int i = 2; i < n; i++) {
		if (i < k) {
			nums[i] = 2 * nums[i-1] % mod;
		}
		else {
			nums[i] = SUM(nums, i - k, i - 1) % mod;
		}
	}
	printf("%lld", (nums[n - 1] + mod) % mod);
	return 0;

}