#include <cstdio>
int main() {
	int nums[3];
	int cnt5 = 0, cnt7 = 0;
	for (int i = 0; i < 3; i++) {
		scanf("%d", &nums[i]);
		if (nums[i] == 5) {
			cnt5++;
		}
		if (nums[i] == 7) {
			cnt7++;
		}
	}
	if (cnt5 == 2 && cnt7 == 1) {
		printf("YES\n");
	}
	else {
		printf("NO\n");
	}
	return 0;
} 
