#include <cstdio>
#include <cstdlib>
int main(int argc, char** argv) {
	int n, m, L, R;
	scanf("%d %d", &n, &m);
	int* nums = (int*)calloc(n, sizeof(int));
	for (int i = 0; i < m; i++) {
		scanf("%d%d", &L, &R);
		for (int j = L; j <= R; j++) {
			nums[j] = 1;
		}
	}
	int cnt = 0;
	for (int i = 0; i < n; i++) {
		if (nums[i] == 0) {
		cnt++;
		}
	}
	free(nums);
	printf("%d", cnt+1);
	return 0;
}

