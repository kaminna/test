#include <cstdio>
#include <climits>
int main(int argc, char** argv) {
	int n, nums[100], max = INT_MIN, sum = 0;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &nums[i]);
		if (nums[i] > max) {
			max = nums[i];
		}
	}
	for (int i = 0; i < n; i++) {
		if (nums[i] != max) {
			sum += nums[i];
		}
	}
	printf("%d", sum);
	return 0;
}