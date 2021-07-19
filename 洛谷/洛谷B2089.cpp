#include <cstdio>
int main(int argc, char** argv) {
	int n, nums[100];
	scanf("%d", &n);
	for (int i = n - 1; i >= 0; i--) {
		scanf("%d", &nums[i]);
	}
	for (int i = 0; i < n; i++) {
		printf("%d ", nums[i]);
	}
	return 0;
}