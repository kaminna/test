#include <cstdio>
#include <climits>
#include <algorithm>
using namespace std;
int main(int argc, char** argv) {
	int n;
	while (scanf("%d", &n) == 1) {
		if (n == 0) break;
		int nums[1000], min = 0;
		for (int i = 0; i < n; i++) {
			scanf("%d", &nums[i]);
			if (nums[i] < nums[min]) {
				min = i;
			}
		}
		swap(nums[0], nums[min]);
		for (int i = 0; i < n; i++) {
			if (i) {
				printf(" ");
			}
			printf("%d", nums[i]);
		}
		printf("\n");
	}
	return 0;
}