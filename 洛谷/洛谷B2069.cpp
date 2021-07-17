#include <cstdio>
int main(int argc, char** argv) {
	int n, nums[50];
	double res = 0;
	nums[0] = 1;
	nums[1] = 1;
	scanf("%d", &n);
	for (int i = 2; i <= n + 1; i++) {
		nums[i] = nums[i - 1] + nums[i - 2];
	}
	for (int i = 1; i <= n; i++) {
		res += 1.0 * nums[i + 1] / nums[i];
	}
	printf("%.4lf", res);
	return 0;
}