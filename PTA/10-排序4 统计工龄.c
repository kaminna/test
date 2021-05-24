#include <stdio.h>
int main(int argc, char** argv) {
	int N;
	scanf("%d", &N);
	int nums[51];
	for (int i = 0; i < 51; i++) {
		nums[i] = 0;
	}
	int num = 0;
	while (N--) {
		scanf("%d", &num);
		nums[num]++;
	}
	for (int i = 0; i < 51; i++) {
		if (nums[i]) {
			printf("%d:%d\n", i, nums[i]);
		}
	}
	return 0;
}