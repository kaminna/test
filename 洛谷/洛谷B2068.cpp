#include <cstdio>
int main(int argc, char** argv) {
	int n, nums, cnt = 0;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &nums);
		if ((nums % 10) - (nums / 1000) - (nums / 10 % 10) - (nums / 100 % 10) > 0) {
			cnt++;
		}
	}
	printf("%d", cnt);
	return 0;
}