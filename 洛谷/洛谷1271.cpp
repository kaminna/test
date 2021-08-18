#include <cstdio>
#include <algorithm>
using namespace std;
int nums[2000001];
int main(int argc, char** argv) {
	int n, m;
	scanf("%d%d", &n, &m);
	for (int i = 0; i < m; i++) {
		scanf("%d", &nums[i]);
	}
	sort(nums, nums + m);
	for (int i = 0; i < m; i++) {
		printf("%d ", nums[i]);
	}
	return 0;
}