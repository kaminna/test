#include <stdio.h>
int nums[200000], sum[200000];
int main(int argc, char** argv) {
	int n, cnt = 0;
	scanf("%d", &n);
	int a[111];
	for (int i = 0; i < n; i++) {
		scanf("%d", &a[i]);
		nums[a[i]] = 1;
	}
	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++) {
			if (nums[a[i] + a[j]] == 1) {
				cnt++;
			}
		}
	}
	printf("%d", cnt);
	return 0;
}