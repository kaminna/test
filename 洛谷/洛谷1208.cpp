#include <cstdio>
int ans[100000];
int f(int n) {
	if (ans[n]) {
		return ans[n];
	}
	if (n % 2) {
		return ans[n] = f(n-1);
	}
	else {
		return ans[n] = f(n-1)+f(n/2);
	}
}
int main() {
	int n;
	scanf("%d", &n);
	ans[0] = 1;
	ans[1] = 1;
	printf("%d", f(n));
	return 0;
}

