#include <stdio.h>
#include <stdlib.h>
int cmp(const void* a, const void* b) {
	return *(int*)a - *(int*)b;
}
int main(int argc, char** argv) {
	int nums[4];
	int res[3];
	int max = 0;
	for (int i = 0; i < 4; i++) {
		scanf("%d", &nums[i]);
		if (nums[i] > max) {
			max = nums[i];
		}
	}
	qsort(nums, 4, sizeof(int), cmp);
	int sum = 0;
	for (int i = 0; i < 3; i++) {
		res[i] = max - nums[2 - i];
		sum += res[i];
	}
	if (sum == max) {
		for (int i = 0; i < 3; i++) {
			printf("%d ", res[i]);
		}
	}
	return 0;
}