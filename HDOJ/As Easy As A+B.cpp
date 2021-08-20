#include <cstdio>
#include <algorithm>
using namespace std;
int main(int argc, char** argv) {
	int T, n, nums[1500];
	scanf("%d", &T);
	while (T--) {
		scanf("%d", &n);
		for (int i = 0; i < n; i++) {
			scanf("%d", &nums[i]);
		}
		sort(nums, nums + n);
		int flag = 0;
		for (int i = 0; i < n; i++) {
			if (flag) {
				printf(" ");
			}
			printf("%d", nums[i]);
			flag = 1;
		}
		printf("\n");
	}
	return 0;
}