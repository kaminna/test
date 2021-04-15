#include <stdio.h>
#include <stdlib.h>
int cmp(const void* a, const void* b) {
	return *(int*)a - *(int*)b;
}
int main(int argc, char** argv) {
	int n, m;
	scanf("%d%d", &n, &m);
	int nums[100000] = { 0 };
	int index[100000] = { 0 };
	for (int i = 0; i < n; i++) {
		scanf("%d", &nums[i]);
	}
	for (int i = 0; i < m; i++) {
		scanf("%d", &index[i]);
	}
	qsort(index, m, sizeof(int), cmp);
	for (int i = 0; i < n; i++) {
		int left = 0, right = m;
		while (left <= right) {
			int mid = (left + right) / 2;
			if (index[mid] == nums[i]) {
				printf("%d ", nums[i]);
				break;
			}
			if (index[mid] > nums[i]) {
				right = mid - 1;
			}
			if (index[mid] < nums[i]) {
				left = mid + 1;
			}
		}
	}
	return 0;
}