void Bubble_Sort(int* nums, int n) {
	int tmp;
	bool flag;
	for (int i = 0; i < n - 1; i++) {
		flag = true;
		for (int j = 0; j < n - 1 - i; j++) {
			if (nums[j] > nums[j + 1]) {
				tmp = nums[j];
				nums[j] = nums[j + 1];
				nums[j + 1] = tmp;
				flag = false; 
			}
		} 
		if (flag) break;
	}
}