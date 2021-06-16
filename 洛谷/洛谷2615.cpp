#include <cstdio>
#include <cstring>
int main(int argc, char** argv) {
	int n;
	scanf("%d", &n);
	int nums[39][39];
	memset(nums, 0, sizeof(nums));
	int up = (n - 1) / 2, bottom = n - 1;
	nums[0][up] = 1;
	int K = 2;
	up++;
	while (1) {
		if (K == n*n+1) {
			break;
		}
		if (bottom == -1 && up == n) {
			bottom += 2;
			up--;
		}
		if (bottom == -1) {
			bottom = n - 1;
			//up++;
		}
		if (nums[bottom][up] != 0) {
			up--;
			bottom += 2;
		}
		if (up == n && bottom != -1) {
			up = 0;
		}
		nums[bottom][up] = K;
		K++;
		bottom--;
		up++;
	}
	
	
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			printf("%d ", nums[i][j]);
		}
		printf("\n");
	}
	return 0;
}

