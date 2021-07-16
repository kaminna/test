#include <cstdio>
int main(int argc, char** argv) {
	int pre, next, nums[5], cnt = 0;
	for (int i = 0; i < 5; i++) {
		scanf("%d", &nums[i]);
	}
	for (int i = 0; i < 5; i++) {
		pre = i - 1;
		next = i + 1;
		if (pre < 0) {
			pre = 4;
		}
		if (next > 4) {
			next = 0;
		}
		nums[pre] += nums[i] / 3;
		nums[next] += nums[i] / 3;
		cnt += nums[i] % 3;
		nums[i] /= 3;
	}
	for (int i = 0; i < 5; i++) {
		printf("%d ", nums[i]);
	}
	printf("\n%d", cnt);
	return 0;
}