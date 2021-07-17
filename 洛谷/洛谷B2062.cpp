#include <cstdio>
long long fastPower(long long base, long long power) {
	long long result = 1;
	while (power > 0) {
		if (power & 1) {//此处等价于if(power%2==1)
			result = result * base % 1000000007;
		}
		power >>= 1;//此处等价于power=power/2
		base = (base * base) % 1000000007;
	}
	return result;
}
int main(int argc, char** argv) {
	long long a, b;
	scanf("%lld%lld", &a, &b);
	printf("%lld", fastPower(a, b));
	return 0;
}