#include <stdio.h>
#include <math.h>
int main(int argc, char** argv) {
	int i, n;
	scanf("%d", &n);
	int nums[3], price[3], ans[3];
	for (i = 0; i < 3; i++) {
		scanf("%d%d", &nums[i], &price[i]);
	}
 	for (i = 0; i < 3; i++) {
 		ans[i] = ceil(1.0 * n / nums[i]) * price[i];
 	}
 	int min = ans[0];
 	for (i = 1; i < 3; i++) {
 		if (ans[i] < min) {
 			min = ans[i];
 		}
 	}
 	printf("%d", min);
	return 0;
}

