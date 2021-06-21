#include <cstdio>
#include <cstring>

long long ans[100000];

long long f(int n) {
	if (ans[n] != -1) {
		return ans[n];
	}
	else {
		return ans[n] = ((n - 1) * (f(n - 1) + f(n - 2)));
	}
}
int main() {
	int n;
	scanf("%d", &n);
	memset(ans, -1, sizeof(ans));
	ans[1] = 0;
	ans[2] = 1;
	printf("%lld", f(n)); 
	return 0;
}

