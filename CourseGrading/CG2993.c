#include <stdio.h>
#include <string.h>
int SUM(char* nums) {
	int i, sum = 0;
	for (i = 0; i < 9; i++) {
		sum += nums[i] - '0';
	}
	return sum;
}
int IsLig(char* nums) {
	int i, flag = 1;
	for (i = 0; i < 9; i++) {
		if (nums[i] == '0') {
			flag = 0;
			return flag;
		}
	}
	return flag;
}
void f(long long n, char* nums) {
	int i = 8;
	while (n) {
		nums[i] = n % 6 + '0';
		n /= 6;
		i--;
	}
}
int main() {
	int n;
	scanf("%d", &n);
	if (n < 9 || n > 45) {
		printf("0");
	}
	else {
		char nums[10];
		long long i, cnt = 0;
		for (i = 2015539; i <= 10077695; i++) {
			f(i, nums);
			if (IsLig(nums)) {
				if (SUM(nums) == n) {
					if (cnt < 5) {
						int j;
						for (j = 0; j < 9; j++) {
							printf("%c ", nums[j]);
						}
						printf("\n");
					}
					cnt++;
				}
			}
		}
		printf("%lld", cnt);
	}
	return 0;
}

