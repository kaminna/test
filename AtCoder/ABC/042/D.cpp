#include <iostream>
#define Mod 1000000007
using namespace std;
long long fac[100001];
long long fastPower(long long base, long long power) {
	long long result = 1;
	while (power > 0) {
		if (power & 1) {	//等价于if(power%2==1)
			result = result * base % Mod;
		}
		power >>= 1;	//等价于power/=2
		base = (base * base) % Mod;
	}
	return result;
}
long long Pow(long long n) {
	if (fac[n]) {
		return fac[n];
	}
	return fac[n] = (Pow(n - 1) % Mod) * (n%Mod) % Mod;
}
int main() {
	ios::sync_with_stdio(false);
	//int H, W, A, B;
	//cin >> H >> W >> A >> B;
	fac[0] = 1;
	fac[1] = 1;
	fac[2] = 2;
	fac[3] = 6;
	fac[4] = 24;
	return 0;
}