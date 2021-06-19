#include <cstdio>
bool isPrime(int x) {
	if (x <= 0) {
		return false;
	}
	if (x == 1) {
		return false;
	}
	for (int i = 2; i < x; i++) {
		if (x % i == 0) {
			return false;
		}
	}
	return true;
}
int main() {
	int n;
	scanf("%d", &n);
	int nums[101];
	for (int i = 0; i < n; i++) {
		scanf("%d", &nums[i]);
		if (isPrime(nums[i])) {
			printf("%d ", nums[i]); 
		}
 	}
	return 0;
}

