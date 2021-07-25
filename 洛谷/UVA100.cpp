#include <cstdio>
int main(int argc, char** argv) {
	long long i, j;
	while (scanf("%lld%lld", &i, &j) == 2) {
		long long max = 1;
		int flag = 1;
		if (i > j) {
			long long t = i;
			i = j;
			j = t;
			flag = 0;
		}
		for (long long k = i; k <= j; k++) {
			long long cnt = 1, t = k;
			while (t != 1) {
				if (t & 1) {
					t = 3 * t + 1;
					cnt++;
				}
				else {
					t /= 2;
					cnt++;
				}
			}
			if (cnt > max) {
				max = cnt;
			}
		}
		if (flag) {
			printf("%lld %lld %lld\n", i, j, max);
		}
		else {
			printf("%lld %lld %lld\n", j, i, max);
		}
	}
	return 0;
}