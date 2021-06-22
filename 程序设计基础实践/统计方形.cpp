#include <cstdio>
int main() {
	long long n, m, s1 = 0, s2 = 0;
	scanf("%lld%lld", &n, &m);
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			if (i == j) {
				s1 = s1 + (m - j + 1) * (n - i + 1);
			}
			else {
				s2 = s2 + (m - j + 1) * (n - i + 1);
			}
		}
	}
	printf("%lld %lld", s1, s2);
	return 0;
}

