#include <stdio.h>
#include <string.h>
int SUM(char* nums) {
	int i, sum = 0;
	for (i = 0; i < 8; i++) {
		sum += nums[i] - '0';
	}
	return sum;
}
int IsLig(char* nums) {
	int flag = 1;
	int i;
	for (i = 0; i < 8; i++) {
		if (nums[i] == '0') {
			flag = 0;
			return flag;
		}
	}
	return flag;
}
void f(int n, char* nums) {
	int i  = 7;
	while (n) {
		nums[i] = n%6 + '0';
		n /= 6;
		i--;
	}
}
int main() {
	int n;
	scanf("%d", &n);
	if (n < 8 || n > 40) {
		printf("0");
	} 
	else {
		char nums[10];
		int i, cnt = 0;
		for (i = 335923; i <= 1679615; i++) {
			f(i, nums);
			if (IsLig(nums)) {
				if (SUM(nums) == n) {
					if (cnt < 5) {
						int j;
						for (j = 0; j < 8; j++) {
							printf("%c ", nums[j]);
						}
						printf("\n");
					}
					cnt++;
				}
			}
		}
		printf("%d", cnt);
	}
	return 0;
}

