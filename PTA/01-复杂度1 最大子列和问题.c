#include <stdio.h>
int main(int argc, char** argv) {
	int n, max = 0, sum = 0;
	scanf("%d", &n);
	if (n == 0) {
		return max;
	}
	int nums[100000];
	for (int i = 0; i < n; i++) {
		scanf("%d", &nums[i]);
	}
	sum = 0;
	for (int i = 0; i < n; i++) {
		sum += nums[i];
		if (sum > max) {
			max = sum;
		}
		if (sum < nums[i]) {
			sum = nums[i];
		}
	}
	printf("%d", max);
	return 0;
}