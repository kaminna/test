#include <bits/stdc++.h>
using namespace std;
#define MOD 1000000007
#define MAXN 200010
long long fac[MAXN], inv[MAXN], ans;

long long FastPower(long long base, long long power) { //快速幂
    long long result = 1;
    while (power > 0) {
        if (power & 1) { //此处等价于if(power%2==1)
            result = result * base % MOD;
        }
        power >>= 1; //此处等价于power=power/2
        base = base * base % MOD;
    }
    return result;
}

void Fac(int n) { //递推求阶乘
	fac[0] = 1;
    for (int i = 1; i <= n; i++) {
    	fac[i] = fac[i-1] * i % MOD;
	}
}

void InvFac(int n) { //递推由费马小定理求阶乘的逆元
	inv[0] = 1;
	inv[n] = FastPower(fac[n], MOD-2);
	for (int i = n-1; i > 0; i--) {
		inv[i] = inv[i+1] * (i+1) % MOD;
	}
}

long long Combination(int n, int m) { //排列组合
	if (n == m || m == 0) return 1;
	return fac[n] * inv[m] % MOD * inv[n-m] % MOD;
}

long long get_(int x1, int y1, int x2, int y2) {
	return Combination(x2-x1+y2-y1, x2-x1);
}

int main(int argc, char** argv) {
	int n, m, a, b;
    scanf("%d%d%d%d", &n, &m, &a, &b);
	//预处理
	Fac(n+m-2);
	InvFac(n+m-2);
    for (int i = 1; i <= n-a; i++) {
		//从(1,1)先走到(i,b)再从(i,b+1)走到(n,m)的方案数
    	ans += get_(1, 1, i, b) * get_(i, b+1, n, m) % MOD;
    	ans %= MOD;
	}
	printf("%lld\n", ans);
	return 0;
}