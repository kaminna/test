#include <cstdio>
#include <algorithm>
using namespace std;
int main(int argc, char** argv) {
	long long i, j;
	while (scanf("%lld%lld", &i, &j) == 2) {
		printf("%lld %lld ", i, j);
		if (i > j) {
			swap(i, j);
		}
		long long maxcnt = 0;
		for (long long k = i; k <= j; k++) {
			long long cnt = 1, n = k;
			while (n != 1) {
				if (n & 1) {
					n = 1 + 3 * n;
				}
				else {
					n /= 2;
				}
				cnt++;
			}
			maxcnt = max(cnt, maxcnt);
		}
		printf("%lld\n", maxcnt);
	}
	return 0;
}