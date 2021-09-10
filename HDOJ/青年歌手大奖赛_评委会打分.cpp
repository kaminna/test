#include <cstdio>
#include <algorithm>
using namespace std;
int main(int rgc, char** argv) {
	int n, nums[1000];
	while (scanf("%d", &n) == 1) {
		double sum = 0;
		int maxc = 0, minc = 99999;
		for (int i = 0; i < n; i++) {
			scanf("%d", &nums[i]);
			sum += nums[i];
			maxc = max(maxc, nums[i]);
			minc = min(minc, nums[i]);
		}
		sum -= maxc + minc;
		printf("%.2lf\n", sum / (n - 2));
	}
	return 0;
}