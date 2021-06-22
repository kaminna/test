#include <cstdio>
#include <cstring>
int main() {
	int a[13] = {0, 1, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3};
	int nums[13];
	for (a[3] = 2; a[3] <= 12; a[3]++) {
		for (a[4] = 2; a[4] <= 12; a[4]++) {
			for (a[6] = 2; a[6] <= 12; a[6]++) {
				for (a[7] = 2; a[7] <= 12; a[7]++) {
					int flag1 = 1;
					a[5] = 26 - 8 - a[3] - a[4];
					a[8] = 26 - 1 - a[3] - a[6];
					a[9] = 26 - 8 - 3 - a[6];
					a[10] = 26 - 3 - a[5] - a[7];
					a[11] = 26 - 1 - a[4] - a[7];
					for (int i = 5; i <= 11; i++) {
						if (a[i] < 1 || a[i] > 12) {
							flag1 = 0;
							break;
						}
					}
					if (flag1) {
						int flag2 = 1;
						memset(nums, 0, sizeof(nums));
						for (int i = 1; i <= 12; i++) {
							nums[a[i]%13]++;
						}
						for (int i = 1; i < 13; i++) {
							if (nums[i] != 1) {
								flag2 = 0;
								break;
							}
						}
						if (flag2) {
							printf("%d", a[6]);
						}
					}
				}
			}
		}
	}
	return 0;
}

