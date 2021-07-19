#include <cstdio>
int main(int argc, char** argv) {
	int n, nums[10000], x, p = -1;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &nums[i]);
	}
	scanf("%d", &x);
	for (int i = 0; i < n; i++) {
		if (nums[i] == x) {
			p = i;
			break;
		}
	}
	printf("%d", p);
	return 0;
}