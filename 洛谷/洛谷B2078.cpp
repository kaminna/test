#include <cstdio>
int main(int argc, char** argv) {
	long long m;
	int k;
	scanf("%lld%d", &m, &k);
	while (m) {
		if (m % 10 == 3) {
			k--;
		}
		m /= 10;
	}
	if (k == 0) {
		printf("YES");
	}
	else {
		printf("NO");
	}
	return 0;
}