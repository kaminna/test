#include <cstdio>
int main(int argc, char** argv) {
	double ans = 0, nums[10] = { 28.9, 32.7, 45.6, 78, 35, 86.2, 27.8, 43, 56, 65 };
	int n;
	for (int i = 0; i < 10; i++) {
		scanf("%d", &n);
		ans += n * nums[i];
	}
	printf("%.1lf", ans);
	return 0;
}