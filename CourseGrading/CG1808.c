#include <stdio.h>
#include <stdlib.h>
int main(int argc, char** argv) {
	int n;
	scanf("%d", &n);
	int* nums = malloc(n * sizeof(int));
	for (int k = 0; k < n; k++) {
		scanf("%d", &nums[k]);
	}
	int Sereja = 0, Dima = 0;
	int left = 0, right = n - 1;
	while (left < right) {
		if (nums[left] > nums[right]) {
			Sereja += nums[left];
			left++;
			if (nums[left] > nums[right]) {
				Dima += nums[left];
				left++;
			}
			else {
				Dima += nums[right];
				right--;
			}
		}
		else {
			Sereja += nums[right];
			right--;
			if (nums[left] > nums[right]) {
				Dima += nums[left];
				left++;
			}
			else {
				Dima += nums[right];
				right--;
			}
		}
	}
	if (n % 2) {
		Sereja += nums[left];
	}
	printf("%d %d", Sereja, Dima);
	free(nums);
	return 0;
}