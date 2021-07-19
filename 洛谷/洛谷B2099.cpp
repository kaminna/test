#include <cstdio>
#include <iostream>
using namespace std;
int main(int argc, char** argv) {
	int n, m, nums[5][5];
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			scanf("%d", &nums[i][j]);
		}
	}
	scanf("%d%d", &m, &n);
	swap(nums[n - 1], nums[m - 1]);
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			printf("%d ", nums[i][j]);
		}
		printf("\n");
	}
	return 0;
}
