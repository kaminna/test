#include <cstdio>
int main(int argc, char** argv) {
	int n, nums, sum = 0;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &nums);
		sum += nums;
	}
	printf("%d %.5lf", sum, 1.0 * sum / n);
	return 0;
}