#include <cstdio>
long long fastPower(long long base, long long power, long long mod) {
	long long result = 1;
	while (power > 0) {
		if (power & 1) {	//Ææ
			result = result * base % mod;
		}
		power >>= 1;	//power/=2
		base = (base * base) % mod;
	}
	return result;
}
int main(int argc, char** argv) {
	long long a, b, p;
	scanf("%lld%lld%lld", &a, &b, &p);
	printf("%lld^%lld mod %lld=%lld", a, b, p, fastPower(a, b, p));
	return 0;
}