#include <cstdio>
int main(int argc, char** argv) {
	int n;
	long long m;
	while (scanf("%d", &n) == 1) {
		m = 1;
		for (int i = 1; i < n; i++) {
			m = (m + 1) * 2;
		}
		printf("%lld\n", m);
	}
	return 0;
}