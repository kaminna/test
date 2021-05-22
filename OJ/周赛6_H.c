#include <stdio.h>
int main(int argc, char** argv) {
	int n, max = 0;
	scanf("%d", &n);
	int nums[101];
	for (int i = 0; i < n; i++) {
		scanf("%d", &nums[i]);
		int tep = i + 1 + nums[i];
		if (tep > max) {
			max = tep;
		}
	}
	if (max < 100) {
		printf("YES");
	}
	else {
		printf("NO");
	}
	return 0;
}
