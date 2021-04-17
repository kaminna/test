bool canJump(int* nums, int numsSize) {
	int maxCanReach = 0;
	for (int i = 0; i < numsSize; i++) {
		if (i <= maxCanReach) {
			int canReach = i + nums[i];
			if (canReach > maxCanReach) {
				maxCanReach = canReach;
			}
		}
	}
	return numsSize - 1 <= maxCanReach;
}