#include <cstdio>
#include <cstring>
int main() {
	int nums[10];
	int a, b, c;
	for (int i = 123; i <= 329; i++) {
		memset(nums, 0, sizeof(nums));
		int flag = 1;
		a = i;
		b = i * 2;
		c = i * 3;
		while (a) {
			nums[a%10]++;
			a /= 10;
		}
		while (b) {
			nums[b%10]++;
			b /= 10;
		}
		while (c) {
			nums[c%10]++;
			c /= 10;
		}
		for (int i = 1; i < 10; i++) {
			if (nums[i] != 1) {
				flag = 0;
				break;
			}
		}
		if (flag) {
			printf("%d %d %d\n", i, i*2, i*3);
		}
	}
	return 0;
} 

