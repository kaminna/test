#include <cstdio>
int main(int argc, char** argv) {
	int n, nums[1500], sum = 0, max = -1, min = 11;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &nums[i]);
		if (nums[i] > max) {
			max = nums[i];
		}
		if (nums[i] < min) {
			min = nums[i];
		}
		sum += nums[i];
	}
	sum -= max + min;
	printf("%.2lf", sum / (n - 2.0));
	return 0;
}