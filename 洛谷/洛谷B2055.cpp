#include <cstdio>
int main(int argc, char** argv) {
	int n;
	double nums, sum = 0;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%lf", &nums);
		sum += nums;
	}
	printf("%lf", sum / n);
	return 0;
}