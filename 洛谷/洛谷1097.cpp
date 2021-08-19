#include <cstdio>
#include <algorithm>
using namespace std;
long long nums[200001], cnt = 1;
int main(int argc, char** argv) {
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%lld", &nums[i]);
	}
	sort(nums, nums + n);
	for (int i = 1; i < n; i++) {
		if (nums[i] == nums[i - 1]) {
			cnt++;
		}
		else {
			printf("%lld %lld\n", nums[i - 1], cnt);
			cnt = 1;
		}
	}
	printf("%lld %lld", nums[n - 1], cnt);
	return 0;
}