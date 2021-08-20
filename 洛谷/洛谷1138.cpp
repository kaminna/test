#include <cstdio>
int nums[30001];
int main(int argc, char** argv) {
	int n, k, val;
	scanf("%d%d", &n, &k);
	for (int i = 0; i < n; i++) {
		scanf("%d", &val);
		nums[val]++;
	}
	for (int i = 0; i < 30001; i++) {
		if (nums[i]) {
			k--;
			if (k == 0) {
				printf("%d", i);
				return 0;
			}
		}
	}
	printf("NO RESULT\n");
	return 0;
}