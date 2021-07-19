#include <cstdio>
int main(int argc, char** argv) {
	int n, nums[100], m, cnt = 0;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &nums[i]);
	}
	scanf("%d", &m);
	for (int i = 0; i < n; i++) {
		if (nums[i] == m) {
			cnt++;
		}
	}
	printf("%d", cnt);
	return 0;
}