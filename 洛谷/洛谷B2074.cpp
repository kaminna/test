#include <cstdio>
#define MOD 7
long long fastPower(long long base, long long power) {
	long long result = 1;
	while (power > 0) {
		if (power & 1) {//�˴��ȼ���if(power%2==1)
			result = result * base % MOD;
		}
		power >>= 1;//�˴��ȼ���power=power/2
		base = (base * base) % MOD;
	}
	return result;
}
int main(int argc, char** argv) {
	char Date[7][10] = { "Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday" };
	long long a, b;
	scanf("%lld%lld", &a, &b);
	printf("%s", Date[fastPower(a, b)]);
	return 0;
}