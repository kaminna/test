#include <cstdio>
#define MOD 1000
long long fastPower(long long base, long long power) {
	long long result = 1;
	while (power > 0) {
		if (power & 1) {//此处等价于if(power%2==1)
			result = result * base % MOD;
		}
		power >>= 1;//此处等价于power=power/2
		base = (base * base) % MOD;
	}
	return result;
}
int main(int argc, char** argv) {
	long long a, b;
	scanf("%lld%lld", &a, &b);
	long long ans = fastPower(a, b);
	if (ans < 10) {
		printf("00%lld", ans);
	}
	else if (ans < 100) {
		printf("0%lld", ans);
	}
	else {
		printf("%lld", ans);
	}
	return 0;
}