#include <stdio.h>
int main(int argc, char** argv) {
	int n, ans;
	scanf("%d", &n);
	int nums, a = 2 * n;
	scanf("%d", &ans);
	while (a) {
		scanf("%d", &nums);
		ans = ans ^ nums;
		a--;
	}
	printf("%d", ans);
	return 0;
}