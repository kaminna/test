#include <stdio.h>
void sort(int* nums, int numsSize) {
	for (int i = 0; i < numsSize-1; i++) {
		for (int j = 0; j < numsSize-1-i; j++) {
			if (nums[j] > nums[j+1]) {
				int temp = nums[j];
				nums[j] = nums[j+1];
				nums[j+1] = temp;
			}
		}
	}
}
int main(int argc, char** argv) {
	int n, cnt = 1;
	scanf("%d", &n);
	if (n <= 0) {
		printf("0");
		return 0;
	}
	int nums[100000] = { 0 };
	for (int i = 0; i < n; i++) {
		scanf("%d", &nums[i]);
	}
	sort(nums, n);
	for (int i = 0; i+1 < n; i++) {
		if (nums[i] != nums[i + 1]) {
			cnt++;
		}
	}
	printf("%d", cnt);
	return 0;
}