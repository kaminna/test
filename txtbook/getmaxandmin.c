#include <stdio.h>
#include <limits.h>
int main(int argc, char** argv) {
	int n;
	scanf("%d", &n);
	int nums[100000], max = 0, min = INT_MAX;
	for (int i = 0; i < n; i++) {
		scanf("%d", &nums[i]);
		if (nums[i] > max) {
			max = nums[i];
		}
		if (nums[i] < min) {
			min = nums[i];
		}
	}
	printf("%d %d", max, min);
	return 0;
}