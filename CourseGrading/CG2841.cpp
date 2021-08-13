#include <cstdio>
#include <algorithm>
using namespace std;
int main(int argc, char** argv) {
	int n, k, nums[100000];
	scanf("%d%d", &n, &k);
	for (int i = 0; i < n; i++) {
		scanf("%d", &nums[i]);
	}
	sort(nums, nums + n);
	printf("%d", nums[n - k]);
	return 0;
}