#include <cstdio>
int nums[50];
int Fib(int n) {
	if (nums[n]) {
		return nums[n];
	}
	return nums[n] = Fib(n - 1) + Fib(n - 2);
}
int main(int argc, char** argv) {
	nums[1] = 1;
	nums[2] = 1;
	int n, a;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &a);
		printf("%d\n", Fib(a));
	}
	return 0;
}