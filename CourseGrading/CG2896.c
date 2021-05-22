#include <stdio.h>
#include <stdlib.h>
long long numOfDuck(int n, long long* nums) {
	if (nums[n]) {
		return nums[n];
	}
	nums[n] = (numOfDuck(n - 1, nums) + 2) * 2;
}
int main(int argc, char** argv) {
	int n;
	long long* nums = calloc(100, sizeof(long long));
	nums[0] = 2;
	while (~scanf("%d", &n)) {
		printf("%lld\n", numOfDuck(n, nums));
	}
/*	long long a = 2;
	while (n--) {
		a += 2;
		a *= 2;
	}
*/
	return 0;
}