int subarraySum(int* nums, int numsSize, int k) {
	int sum[numsSize + 1];
	sum[0] = 0;
	for (int x = 1; x <= numsSize; x++) {
		sum[x] = sum[x - 1] + nums[x - 1];
	}
	int count = 0;
	for (int j = 0; j < numsSize; j++) {
		int target = sum[j + 1] - k;
		for (int i = 0; i <= j; i++) {
			if (sum[i] == target) {
				count++;
			}
		}
	}
	return count;
}