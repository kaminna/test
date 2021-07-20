#include <cstdio>
#include <climits>
int main(int argc, char** argv) {
	int nums[5][5], row[5], clo[5] = {INT_MAX, INT_MAX, INT_MAX, INT_MAX, INT_MAX}, max = INT_MIN;
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			scanf("%d", &nums[i][j]);
			if (nums[i][j] < clo[j]) {
				clo[j] = nums[i][j];
			}
			if (nums[i][j] > max) {
				max = nums[i][j];
			}
		}
		row[i] = max;
		max = INT_MIN;
	}
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			if (row[i] == clo[j]) {
				printf("%d %d %d", i+1, j+1, row[i]);
				return 0;
			}
		}
	}
	printf("not found");
	return 0;
}