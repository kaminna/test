#include <cstdio>
int main(int argc, char** argv) {
	int n;
	while (scanf("%d", &n) == 1) {
		if (n == 0) break;
		int cnt1 = 0, cnt2 = 0, cnt3 = 0;
		double nums;
		while (n--) {
			scanf("%lf", &nums);
			if (nums < 0) {
				cnt1++;
			}
			if (nums == 0) {
				cnt2++;
			}
			if (nums > 0) {
				cnt3++;
			}
		}
		printf("%d %d %d\n", cnt1, cnt2, cnt3);
	}
	return 0;
}