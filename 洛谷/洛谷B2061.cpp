#include <cstdio>
int main(int argc, char** argv) {
	int n, nums, cnt1 = 0, cnt5 = 0, cnt10 = 0;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &nums);
		if (nums == 1) {
			cnt1++;
		}
		if (nums == 5) {
			cnt5++;
		}
		if (nums == 10) {
			cnt10++;
		}
	}
	printf("%d\n%d\n%d", cnt1, cnt5, cnt10);
	return 0;
}