#include <cstdio>
long long ans[1000000];
long long f(long long n) {
	if (n <= 0) {
		return 0;
	}
	if (ans[n]) {
		return ans[n]; 
	}
	return ans[n] = f(n-1)+f(n-2)+f(n-3);
}
int main() {
	ans[1] = 1;
	ans[2] = 2;
	ans[3] = 4;
	long long n;
	scanf("%lld", &n);
	printf("%lld", f(n));
	return 0;
}

