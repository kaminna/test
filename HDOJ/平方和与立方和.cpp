#include <cstdio>
#include <algorithm>
using namespace std;
int main(int argc, char** argv) {
	long long n, m;
	while (scanf("%lld%lld", &n, &m) == 2) {
		if (n > m) swap(n, m);
		long long sum1 = 0, sum2 = 0;
		for (long long i = n; i <= m; i++) {
			if (i & 1) {
				sum2 += i * i * i;
			}
			else {
				sum1 += i * i;
			}
		}
		printf("%lld %lld\n", sum1, sum2);
	}
	return 0;
}